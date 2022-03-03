#pragma once
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
#include <iostream>
#include <string>
#include <fstream>

// Символы 16-ной систмы счисления
const char Symbols[] = { "0123456789ABCDEF" };

// enum с действиями - чтобы избежать магических непонятных чисел в коде
enum actions_sings {
	leave = 0,
	plus = 1,
	minus = 2,
	multiply = 3,
	divide = 4,
	equal = 5,
	compare = 6,
	index = 7,
	equals = 8,
	not_equals = 9,
	greater_equals = 10,
	greater = 11,
	less_equals = 12,
	less = 13
};

// Класс hex
class Hex_num {
private:
	// После с хранением hex в символах
	unsigned char* hex;
public:

	// Конструктор по умолчанию
	Hex_num();

	// Конструктор инициализации
	Hex_num(std::string str);
	
	// Конструктор копирования
	Hex_num(const Hex_num& num);

	// Деструктор
	~Hex_num();

	// Метод (тест) 
	bool action(Hex_num& num, int sign);

	// Операторы действий
	void operator = (const Hex_num& num);
	friend void operator += (Hex_num& num, Hex_num& num_two);
	friend void operator -= (Hex_num& num, Hex_num& num_two);
	friend void operator *= (Hex_num& num, Hex_num& num_two);
	friend void operator /= (Hex_num& num, Hex_num& num_two);
	friend bool operator == (Hex_num& num, Hex_num& num_two);
	friend bool operator != (Hex_num& num, Hex_num& num_two);
	friend bool operator >= (Hex_num& num, Hex_num& num_two);
	friend bool operator <= (Hex_num& num, Hex_num& num_two);
	friend bool operator > (Hex_num& num, Hex_num& num_two);
	friend bool operator < (Hex_num& num, Hex_num& num_two);
	// Оператор индексации
	char operator[](int index);
	// Операторы вывода в потоки
	friend std::ostream& operator << (std::ostream& out, Hex_num& num);
	friend std::ofstream& operator << (std::ofstream& out, Hex_num& num);
	// Методы рассчёта сумм
	friend void sum_first(Hex_num& num, int size_first, int& sum_first_number );
	friend void sum_second(Hex_num& num, int size_second, int& sum_second_number);
};

// Методы из мейна (Проверка активного действия и результат сравнений)
void action_active(int action, Hex_num hex_num_first, Hex_num hex_num_second);
void nums_compare(int action, Hex_num hex_num_first, Hex_num hex_num_second);
