#include "HEX-number-class-header.h"

Hex_num::Hex_num() {
	hex = 0;
}

Hex_num::Hex_num(std::string str) {
	int size = str.length();
	hex = new unsigned char[size];
	if (size > 15) { std::cout << "ERROR Range" << std::endl; }
	for (int i = 0; i < size; i++) { hex[i] = str[i]; }
	hex[size] = 0;
}

Hex_num::~Hex_num() {}

bool Hex_num::action(Hex_num& num, int sign) {
	int sum_second_number = 0, sum_first_number = 0, count_numbers = 0, link_end = 0, size_second = strlen(reinterpret_cast<const char*>(num.hex)), size_first = strlen(reinterpret_cast<const char*>(hex));
	sum_first(*this, size_first, sum_first_number);
	sum_second(num, size_second, sum_second_number);
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
	sum_second_number = sum_first_number;
	for (count_numbers = 0; sum_second_number >= 16; count_numbers++) { sum_second_number /= 16; }
	hex = new unsigned char[count_numbers];
	link_end = count_numbers + 1;
	for (int i = count_numbers; i >= 0; i--) {
		hex[i] = Symbols[sum_first_number % 16];
		sum_first_number /= 16;
	}
	hex[link_end] = 0;
	return false;
}
void Hex_num::operator = (Hex_num& num) { hex = num.hex; }

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

std::ostream& operator << (std::ostream& out, Hex_num& num) {
	out << "HEX: " << num.hex << std::endl;
	return out;
}