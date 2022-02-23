#include <iostream>// 1 байт - 8 бит - int - 4 байта - 32 бита
#define MAX_32_INT_NUMBER 2147483647 
#define MIN_32_INT_NUMBER -2147483648
#define MAX_32_UNSSIGNED_INT_NUMBER 4294967295 // min 0
#define MAX_64_BIT_NUMBER 9223372036854775807
#define MIN_64_BIT_NUMBER -9223372036854775808
#define MAX_64_BIT_UNSIGNED_INT_NUMBER 18446744073709551616 // min 0
using std::cout;
using std::cin;
using std::endl;

typedef long long _longlong_result; // -9223372036854775808 | 9223372036854775807

int main() {
	
	class _long_long_number {                  // 64 бита (+/-)
	public:
		int high;                              // 32 бита (+/-)
		unsigned int low;                      // 32 бита  (+)
	
		_long_long_number() {
			high = MAX_32_INT_NUMBER;          // 32 бита (+/-)
			low = MAX_32_UNSSIGNED_INT_NUMBER; // 32 бита  (+)
		}

		_long_long_number(int _high, unsigned int _low) {
			high = _high;					   // 32 бита (+/-)
			low = _low;						   // 32 бита  (+)
		}

		_long_long_number(_longlong_result number) {
			high = number >> 32;			   // 32 бита (+/-)
			low = number - (number << 32);	   // 32 бита  (+)
		}

		_long_long_number(const _long_long_number& number) {
			high = number.high;                // 32 бита (+/-)
			low = number.low;                  // 32 бита  (+)
		}
		~_long_long_number() 
		{

		}
		bool ravno(const _long_long_number& number) { // Операция сравнения вводится 64 битное число
			if ((high == number.high) && (low == number.low)) return true;
			else return false;
		};
		bool ravno(const int _high, const unsigned int _low) {  // Операция сравнения вводится два 32 битных числа
			if ((high == _high) && (low == _low)) return true;
			else return false;
		};
		bool bolshe(const _long_long_number& number) {  // Операция сравнения вводится 64 битное число
			if ((high > number.high) || (high == number.high) && (low > number.low)) return true;
			else return false;
		};
		bool bolshe(const int _high, const unsigned int _low) {  // Операция сравнения вводится два 32 битных числа
			if ((high > _high) || ((high == _high) && (low > _low))) return true;
			else return false;
		};
		bool menshe(const _long_long_number& number) {  // Операция сравнения вводится 64 битное число
			if ((high <= number.high) || (high == number.high) && (low < number.low)) return true;
			else return false;
		};
		bool menshe(const int _high, const unsigned int _low) {  // Операция сравнения вводится два 32 битных числа
			if ((high <= _high) || ((high == _high) && (low < _low))) return true;
			else return false;
		};
		void plus(_long_long_number& n1) { // Сложение
			int H = high;
			unsigned int L = low;
			high += n1.high;
			low += n1.low;
			if (L >= low + 1) {
				high++;
			}
		}
		void minus(_long_long_number& n1) { // Вычитание
			int H = high;
			unsigned int L = low;
			high -= n1.high;
			if (low < n1.low) {
				int tmp = MAX_32_INT_NUMBER;
				tmp -= n1.low;
				low += tmp;
				high--;
			}
			else { low -= n1.low; }
		}
		void print() { // Вывод 64 битного числа
			_longlong_result result_print = 0;
			result_print = ((result_print ^ high) << 32) ^ low;
			std::cout << "64 bits number: " << result_print << std::endl;
		}
		void printHL() { // Вывод старшей и младшей части класса
			std::cout << "32 bits high number: " << high << std::endl;
			std::cout << "32 bits low number: " << low << std::endl;
		}
		void assign(_longlong_result number) { // Изменение числа вводится 64 битное число
			high = number >> 32;			   
			low = number - (number << 32);
		}
		void assign(int _high, unsigned int _low) { // Изменение числа вводится два 32 битных числа
			high = _high;			  
			low = _low;
		}
		void multiply(_long_long_number& number) { // умножение сборка большого числа потом разборка ( при помощи переменной long long )
			_longlong_result result_1 = 0, result_2 = 0;
			result_1 = ((result_1 ^ high) << 32) ^ low;
			result_2 = ((result_2 ^ number.high) << 32) ^ number.low;
			result_1 *= result_2;
			high = result_1 >> 32;			   // 32 бита (+/-)
			low = result_1 - (result_1 << 32);	   // 32 бита  (+)
		}
		void divide(_long_long_number& number) { // Деление сборка большого числа потом разборка ( при помощи переменной long long )
			_longlong_result result_1 = 0, result_2 = 0;
			result_1 = ((result_1 ^ high) << 32) ^ low;
			result_2 = ((result_2 ^ number.high) << 32) ^ number.low;
			result_1 /= result_2;
			high = result_1 >> 32;			   // 32 бита (+/-)
			low = result_1 - (result_1 << 32);	   // 32 бита  (+)
		}
	};
	bool flag = 1;
	char sim = 1;
    _longlong_result number = 0, number_2 = 0;
	_long_long_number num = 0, num2 = 0;
	while (flag) {
		cout << "1) Enter a 64-bit number or two 32-bit numbers? (64/32): ";
		cin >> number;
		if (number == 64) {
			cout << "1) Enter a 64-bit number: ";
			cin >> number;
			num.assign(number);
		}
		else if (number == 32) {
			cout << "1) Enter a 32-bit high number: ";
			cin >> number;
			cout << "1) Enter a 32-bit low number: ";
			cin >> number_2;
			num.assign(number, number_2);
		}
		cout << "Select operation ('+' '-' '*' '/' '=' '>' '<') or change the first number (1): ";
		cin >> sim;
		if (sim != '1') { flag = 0; }
	}
	cout << "2) Enter a 64-bit number or two 32-bit numbers? (64/32): ";
	cin >> number;
	if (number == 64) {
		cout << "2) Enter a 64-bit number: ";
		cin >> number;
		num2.assign(number);
	}
	else if (number == 32) {
		cout << "2) Enter a 32-bit high number: ";
		cin >> number;
		cout << "2) Enter a 32-bit low number: ";
		cin >> number_2;
		num2.assign(number, number_2);
	}
	if (sim == '+') {
		num.plus(num2);
	}
	else if (sim == '-') {
		num.minus(num2);
	}
	else if (sim == '*') {
		num.multiply(num2);
	}
	else if (sim == '/') {
		num.divide(num2);
	}
	else if (sim == '=') {
		if (num.ravno(num2)) {
			cout << "num == num2" << endl;
		}
		else { cout << "num != num2" << endl; }
	}
	else if (sim == '>') {
		if (num.bolshe(num2)) {
			cout << "num > num2" << endl;
		}
		else { cout << "num not > num2" << endl; }
	}
	else if (sim == '<') {
		if (num.menshe(num2)) {
			cout << "num < num2" << endl;
		}
		else { cout << "num not < num2" << endl; }
	}
	cout << "========================" << endl;
	num.print();
	num.printHL();
	cout << "========================" << endl;
	system("pause");
	return 0;
} 
