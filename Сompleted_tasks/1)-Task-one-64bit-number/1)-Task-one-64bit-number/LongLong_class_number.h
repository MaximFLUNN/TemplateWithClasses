#pragma once
#include <iostream>// 1 байт - 8 бит - int - 4 байта - 32 бита
#define MAX_32_INT_NUMBER 2147483647 
#define MIN_32_INT_NUMBER -2147483648
#define MAX_32_UNSSIGNED_INT_NUMBER 4294967295
#define MAX_64_BIT_NUMBER 9223372036854775807Я
#define MIN_64_BIT_NUMBER -9223372036854775808
typedef long long _longlong_result; // -9223372036854775808 | 9223372036854775807

class _long_long_number {                               // 64 бита (+/-)
public:
	int high;                                           // 32 бита (+/-)
	unsigned int low;                                   // 32 бита  (+)

	_long_long_number();                                // Конструктор по умолчанию
	_long_long_number(int _high, unsigned int _low);    // Конструктор инициализации при вводе двух 32 битных чисел
	_long_long_number(_longlong_result number);         // Конструктор инициализации при вводе 64 битного числа
	_long_long_number(const _long_long_number& number); // Конструктор копирования
	~_long_long_number();								// Деструктор

	bool operator == (const _long_long_number& number); // Операция сравнения вводится 64 битное число
	bool operator > (const _long_long_number& number);  // Операция сравнения вводится 64 битное число
	bool operator <(const _long_long_number& number);   // Операция сравнения вводится 64 битное число
	void operator += (_long_long_number& n1);           // Операция сложения
	void operator -= (_long_long_number& n1);           // Операция вычитания
	void operator = (_longlong_result number);			// Присваивание числа, вводится 64 битное число
	void operator *= (_long_long_number& number);       // умножение сборка большого числа потом разборка ( при помощи переменной long long )
	void operator /= (_long_long_number& number);       // Деление сборка большого числа потом разборка ( при помощи переменной long long )
	friend std::ostream& operator << (std::ostream& out, _long_long_number& time); // Оператор вывода

	void print();										// Вывод 64 битного числа	
	void printHL();										// Вывод старшей и младшей части класса
};