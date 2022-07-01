#include "LongLong_class_number.h"

// Конструктор по умолчанию
_long_long_number::_long_long_number() {
	high = MAX_32_INT_NUMBER;          // 32 бита (+/-)
	low = MAX_32_UNSSIGNED_INT_NUMBER; // 32 бита  (+)
}

// Конструктор инициализации при вводе двух 32 битных чисел
_long_long_number::_long_long_number(int _high, unsigned int _low) { 
	high = _high;					   // 32 бита (+/-)
	low = _low;						   // 32 бита  (+)
}

// Конструктор инициализации при вводе 64 битного числа
_long_long_number::_long_long_number(_longlong_result number) {
	high = number >> 32;			   // 32 бита (+/-)
	low = number - (number << 32);	   // 32 бита  (+)
}

// Конструктор копирования
_long_long_number::_long_long_number(const _long_long_number& number) {
	high = number.high;                // 32 бита (+/-)
	low = number.low;                  // 32 бита  (+)
}

// Деструктор
_long_long_number::~_long_long_number() {}

// Операция сравнения вводится 64 битное число
bool _long_long_number::operator == (const _long_long_number& number) {
	if ((high == number.high) && (low == number.low)) return true;
	else return false;
};

// Операция сравнения вводится 64 битное число
bool _long_long_number::operator > (const _long_long_number& number) {
	if ((high > number.high) || (high == number.high) && (low > number.low)) return true;
	else return false;
};

// Операция сравнения вводится 64 битное число
bool _long_long_number::operator <(const _long_long_number& number) {
	if ((high <= number.high) || (high == number.high) && (low < number.low)) return true;
	else return false;
};

// Операция сложения
void _long_long_number::operator += (_long_long_number& n1) {
	int H = high;
	unsigned int L = low;
	high += n1.high;
	low += n1.low;
	if (L >= low + 1) {
		high++;
	}
}

// Операция вычитания
void _long_long_number::operator -= (_long_long_number& n1) { 
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

// // Присваивание числа, вводится 64 битное число
void _long_long_number::operator = (_longlong_result number) {
	high = number >> 32;
	low = number - (number << 32);
}

// умножение сборка большого числа потом разборка ( при помощи переменной long long )
void _long_long_number::operator *= (_long_long_number& number) {
	_longlong_result result_1 = 0, result_2 = 0;
	result_1 = ((result_1 ^ high) << 32) ^ low;
	result_2 = ((result_2 ^ number.high) << 32) ^ number.low;
	result_1 *= result_2;
	high = result_1 >> 32;			   // 32 бита (+/-)
	low = result_1 - (result_1 << 32);	   // 32 бита  (+)
}

// Деление сборка большого числа потом разборка ( при помощи переменной long long )
void _long_long_number::operator /= (_long_long_number& number) {
	_longlong_result result_1 = 0, result_2 = 0;
	result_1 = ((result_1 ^ high) << 32) ^ low;
	result_2 = ((result_2 ^ number.high) << 32) ^ number.low;
	result_1 /= result_2;
	high = result_1 >> 32;			   // 32 бита (+/-)
	low = result_1 - (result_1 << 32);	   // 32 бита  (+)
}

// Оператор вывода
std::ostream& operator << (std::ostream& out, _long_long_number& num) {
	_longlong_result result_print = 0;
	result_print = ((result_print ^ num.high) << 32) ^ num.low;
	out << "64 bits number: " << result_print << std::endl;
	return out;
}

// Вывод 64 битного числа
void _long_long_number::print() { 
	_longlong_result result_print = 0;
	result_print = ((result_print ^ high) << 32) ^ low;
	std::cout << "64 bits number: " << result_print << std::endl;
}

// Вывод старшей и младшей части класса
void _long_long_number::printHL() {
	std::cout << "32 bits high number: " << high << std::endl;
	std::cout << "32 bits low number: " << low << std::endl;
}
