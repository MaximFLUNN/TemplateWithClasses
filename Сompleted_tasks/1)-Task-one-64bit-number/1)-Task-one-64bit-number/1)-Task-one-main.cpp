/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
				|      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
									   | Main source file |
| [ENG] Task 1 (option 6): Develop a LongLong class to work with 64-bit integers represented by two fields:
int - high part, unsigned int - low part each 32 bits long. The class must contain constructors / destructors
as well as assignment, addition, subtraction, multiplication, division, comparison, input / output operations |
| [RU] Task 1 (вариант 6): Разработать класс LongLong для работы с целыми 64 битовыми числами, представленными двумя полями: 
int - старшая часть, unsigned int - младшая часть каждые длиной по 32 бита. 
Класс должен содержать конструкторы/деструктор а так же операции присваивания, сложения, вычитания, умножения, деления,
сравнения, ввод/вывод |
*/
#include "LongLong_class_number.h"

int main() {
	char sim = 1;
    _longlong_result number = 0, number_2 = 0;
	_long_long_number num = 0, num2 = 0;
	std::cout << "1) Enter a 64-bit number: ";
	std::cin >> number;
	num = number;
	while (1) {
		std::cout << "Select operation ('+' '-' '*' '/' '=' '>' '<') or change the first number (1): ";
		std::cin >> sim;
		if (sim == '1') { 
			std::cout << "Exit" << std::endl;
			break; 
		}
		std::cout << "2) Enter a 64-bit number: ";
		std::cin >> number;
		num2 = number;
		if (sim == '+') {
			num += num2;
		}
		else if (sim == '-') {
			num -= num2;
		}
		else if (sim == '*') {
			num *= num2;
		}
		else if (sim == '/') {
			num /= num2;
		}
		else if (sim == '=') {
			if (num == num2) {
				std::cout << "num == num2" << std::endl;
			}
			else { std::cout << "num != num2" << std::endl; }
		}
		else if (sim == '>') {
			if (num > num2) {
				std::cout << "num > num2" << std::endl;
			}
			else { std::cout << "num not > num2" << std::endl; }
		}
		else if (sim == '<') {
			if (num < num2) {
				std::cout << "num < num2" << std::endl;
			}
			else { std::cout << "num not < num2" << std::endl; }
		}
		std::cout << "========================" << std::endl;
		std::cout << num;
		num.printHL();
		std::cout << "========================" << std::endl;
	}
	system("pause");
	return 0;
} 
