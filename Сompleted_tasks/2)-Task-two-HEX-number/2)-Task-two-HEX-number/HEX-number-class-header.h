#pragma once
#include <iostream>
#include <string>

const char Symbols[] = { "0123456789ABCDEF" };

enum actions_sings {
	leave = 0,
	plus = 1,
	minus = 2,
	multiply = 3,
	divide = 4,
	equal = 5,
	compare = 6,
	equals = 7,
	not_equals = 8,
	greater_equals = 9,
	greater = 10,
	less_equals = 11,
	less = 12
};

class Hex_num {
private:
	unsigned char* hex;
public:

	// Конструктор по умолчанию
	Hex_num();

	// Конструктор инициализации
	Hex_num(std::string str);

	~Hex_num();

	// Метод (тест) 
	bool action(Hex_num& num, int sign);

	void operator = (Hex_num& num);
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

	friend std::ostream& operator << (std::ostream& out, Hex_num& num);
	friend std::ofstream& operator << (std::ofstream& out, Hex_num& num);
	friend std::istream& operator >> (std::istream& input, Hex_num& num);
	friend std::ifstream& operator >> (std::ifstream& input, Hex_num& num);

	friend void sum_first(Hex_num& num, int size_first, int& sum_first_number );
	friend void sum_second(Hex_num& num, int size_second, int& sum_second_number);
};
// >> Ввод и вывод + txt файл << 
