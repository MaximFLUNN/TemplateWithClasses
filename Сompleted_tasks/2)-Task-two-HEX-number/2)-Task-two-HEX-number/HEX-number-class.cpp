/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
				|      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
									   | Main source file |
| [ENG] Task 2 (option 5): Create a Hex class to work with unsigned hexadecimal integers,using an array of unsigned char
elements to represent a number,each of which is a hexadecimal digit. The lower digit has a lower index.
Implement operations (=, +, -, comparisons, >>, <<, []) |
| [RU] Task 2 (вариант 5): Создать класс Hex для работы с беззнаковыми целыми шеснадцетиричными числами,
используя для представления числа массив из элементов типа unsigned char,
каждый из которых является шеснадцетиричной цифрой. Младшая цифра имеет меньший индекс.
Реализовать операции (=, +, -, сравнения, >>, <<, []) |
*/

// Импор хедера
#include "HEX-number-class-header.h"

// Конструктор по умолчанию
Hex_num::Hex_num() {
	hex = 0;
}

// Конструктор инициализации 
Hex_num::Hex_num(std::string str) {
	int size = str.length();
	hex = new unsigned char[size];
	if (size > 15) { std::cout << "ERROR Range" << std::endl; }
	for (int i = 0; i < size; i++) { hex[i] = str[i]; }
	hex[size] = 0;
}

// Конструктор копирования
Hex_num::Hex_num(const Hex_num& num) {
	hex = num.hex;
}

// Деструктор
Hex_num::~Hex_num() {}

// Метод действий
bool Hex_num::action(Hex_num& num, int sign) {
	// Нужные переменные
	int sum_second_number = 0, // Сумма значений второго hex числа
		sum_first_number = 0, // Сумма значений первого hex числа
		count_numbers = 0, // Количество символов в hex числе
		link_end = 0, // Индекс символа на отором заканчивается hex число
		// reinterpret_cast - это приведение типов без проверки (указатель к указатели, указатель к целому, целое к указателю)
		size_second = strlen(reinterpret_cast<const char*>(num.hex)), // Кол-во символов во второй переменной hex
		size_first = strlen(reinterpret_cast<const char*>(hex)); // Кол-во символов в первой переменной hex 
	sum_first(*this, size_first, sum_first_number); // Функция нахождения суммы значений первого hex
	sum_second(num, size_second, sum_second_number); // Функция нахождения суммы значений второго hex

	// Проверка на знак, если знак сравнения возвращает True или False иначе всегда False
	if (sign == plus) { sum_first_number += sum_second_number; } 
	else if (sign == minus) { sum_first_number -= sum_second_number; }
	else if (sign == multiply) { sum_first_number *= sum_second_number; }
	else if (sign == divide) { sum_first_number /= sum_second_number; }
	else if (sign == equals) { return sum_first_number == sum_second_number; }
	else if (sign == not_equals) { return sum_first_number != sum_second_number; }
	else if (sign == greater_equals) { return sum_first_number >= sum_second_number; }
	else if (sign == greater) { return sum_first_number > sum_second_number; }
	else if (sign == less_equals) { return sum_first_number <= sum_second_number; }
	else if (sign == less) { return sum_first_number < sum_second_number; }

	// Привавнивание и последующее использование для вычисления hex (кол-во символов и самих символов)
	sum_second_number = sum_first_number;

	// Рассчёт кол-ва символов в новом hex
	for (count_numbers = 0; sum_second_number >= 16; count_numbers++) { sum_second_number /= 16; }
	// Первевыделение памяти под новый hex
	hex = new unsigned char[count_numbers];
	// Определяем индекс последнего символа
	link_end = count_numbers + 1;
	// Записываем символы в новый hex
	for (int i = count_numbers; i >= 0; i--) {
		// Определение нужного символа
		hex[i] = Symbols[sum_first_number % 16];
		// Уменьшение суммы
		sum_first_number /= 16;
	}
	// Удаление мусора после числа
	hex[link_end] = 0;
	// Возвтрат bool - false
	return false;
}
// Операторы 
void Hex_num::operator = (const Hex_num& num) { hex = num.hex; }
void operator += (Hex_num& num, Hex_num& num_two) { num.action(num_two, plus); }
void operator -= (Hex_num& num, Hex_num& num_two) { num.action(num_two, minus); }
void operator *= (Hex_num& num, Hex_num& num_two) { num.action(num_two, multiply); }
void operator /= (Hex_num& num, Hex_num& num_two) { num.action(num_two, divide); }
bool operator == (Hex_num& num, Hex_num& num_two) { return num.action(num_two, equals); }
bool operator != (Hex_num& num, Hex_num& num_two) { return num.action(num_two, not_equals); }
bool operator >= (Hex_num& num, Hex_num& num_two) { return num.action(num_two, greater_equals); }
bool operator > (Hex_num& num, Hex_num& num_two) { return num.action(num_two, greater); }
bool operator <= (Hex_num& num, Hex_num& num_two) { return num.action(num_two, less_equals); }
bool operator < (Hex_num& num, Hex_num& num_two) { return num.action(num_two, less); }

// Рассчёт суммы первого hex
void sum_first(Hex_num& num, int size_first, int& sum_first_number) {
	for (int i = size_first - 1, _pow = 0; i >= 0; i--, _pow++) {
		for (int j = 0; j < strlen(Symbols); j++) {
			if (num.hex[i] == Symbols[j]) {
				sum_first_number += j * pow(16, _pow);
				break;
			}
		}
	}
}

// Рассчёт суммы чисел второго hex
void sum_second(Hex_num& num, int size_second, int& sum_second_number) {
	for (int i = size_second - 1, _pow = 0; i >= 0; i--, _pow++) {
		for (int j = 0; j < strlen(Symbols); j++) {
			if (num.hex[i] == Symbols[j]) {
				sum_second_number += j * pow(16, _pow);
				break;
			}
		}
	}
}

// Оператор индексации
char Hex_num::operator[](int index) {
	if (index > strlen(reinterpret_cast<const char*>(hex))) { return '\0'; }
	return hex[index];
}

// Оператор вывода в текстовый файл
std::ofstream& operator << (std::ofstream& out, Hex_num& num) {
	out << num.hex;
	return out;
}

// Оператор вывода в консоль
std::ostream& operator << (std::ostream& out, Hex_num& num) {
	out << "HEX: " << num.hex;
	return out;
}