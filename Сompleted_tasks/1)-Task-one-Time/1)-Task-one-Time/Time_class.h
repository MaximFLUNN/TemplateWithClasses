#pragma once
/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
				|      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
									   | Time class header file |
| [ENG] Task 1 (option 5): Develop a Time class to work with time in a format represented as a triple of hours, minutes, seconds.
The class must contain: constructors/destructor
operations: assignments, additions, subtractions, comparisons, output/input |
| [RU] Task 1 (вариант 5): Разработать класс Time для работы с временем в формате, представленным в виде тройки
hours, minutes, seconds. Класс должен содержать: конструкторы/деструктор
оперции: присваивания, сложения, вычитания, сравнения, вывод/ввод. |
*/
#include<iostream>
#include <string>
#define SECONDS_IN_DAY 86400
#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60

enum number_action {
	plus = 1,
	minus = 2,
	change = 3,
	compare = 4
};

enum compare_action {
	equals = 1,
	greater = 2,
	less = 3
};

class _time
{
private:
	int hours, minutes, seconds; // Основные переменные времени

public:

	_time(); // Конструктор по умолчанию
	_time(std::string str); // Конструктор инициализации
	_time(const _time& time); // Конструктор копирования
	~_time(); // Деструктор

	void operator += (const _time& time);               // Операция складывания
	void operator -= (const _time& time);               // Операция вычитания
	void operator = (const _time& time);                // Операция замены времени
	bool operator == (const _time& time);               // Операция сравнения времени (равно)
	bool operator > (const _time& time);                // Операция сравнения времени (больше)
	bool operator < (const _time& time);                // Операция сравнения времени (меньше)
	bool operator !=(const _time& time);                // Операция сравнения времени (не равно)

	friend std::ostream& operator << (std::ostream& out, _time& time); // Оператор вывода

	void update(int day);                               // Метод обновления времени и приведение в правильный формат (day 0 - 48 : 0 : 120 -> day 2 - 0 : 2 : 0)
	int compare(const _time& time);                     // Метод стравнения
	void print_compare(const _time& time, int compare); // Метод вывода результата сравнения
};