#include "HEX-number-class-header.h"
int main() {
	//std::string str;
	//std::cout << "Enter hex: ";
	//getline(std::cin, str);
	//Hex_num hex(str);
	////std::cin.ignore();
	//std::cout << "Enter hex: ";
	//getline(std::cin, str);
	//Hex_num hex2(str);
	//hex -= hex2;
	//return 0;

	int mode = 0;
	std::cout << "Select operating mode (1- demo | 2 - custom): ";
	std::cin >> mode;
	if (mode == 1) {
		//system("cls");
		//_time time_one("12:10:30");
		//_time time_two("0:0:1200");
		//std::cout << "[Info] Starting demo mode\n[Info] Start time: " << time_one << std::endl;
		//std::cout << "[Info] Operation plus 1200 sec = 20 min \n";
		//// Сблок сложения времени
		//std::cout << "[Plus] (" << time_one << ") + (" << time_two << ")" << " = ";
		//time_one += time_two;
		//std::cout << "(" << time_one << ")" << std::endl;
		//// Блок вычитания времени
		//time_two = _time("6:30:30");
		//std::cout << "[Minus] (" << time_one << ") - (" << time_two << ")" << " = ";
		//time_one -= time_two;
		//std::cout << "(" << time_one << ")" << std::endl;
		//// Блок замеены времени
		//time_two = _time("12:12:12");
		//std::cout << "[Change] (" << time_one << ") = (" << time_two << ")" << " = ";
		//time_one = time_two;
		//std::cout << "(" << time_one << ")" << std::endl;
		//// Блок сравнений
		//std::cout << "[Compare ==] ";
		//time_one.print_compare(time_two, time_one.compare(time_two));
		//time_two = _time("10:20:30");
		//std::cout << "[Compare >] ";
		//time_one.print_compare(time_two, time_one.compare(time_two));
		//time_two = _time("23:59:59");
		//std::cout << "[Compare <] ";
		//time_one.print_compare(time_two, time_one.compare(time_two));
	}
	else if (mode == 2) {
		std::string str;
		int action, enter_mode;
		std::cout << "Enter a number from the keyboard or import from a file? (1/2): ";
		std::cin >> enter_mode;
		if (enter_mode == 1) {
			std::cout << "Enter Hex: ";
			std::cin.ignore();
			getline(std::cin, str);
		}
		else if (enter_mode == 2) {
			// тут чтение из файла
		}
		Hex_num hex_num_first(str);
		while (true)
		{
			std::cout << "Enter operation: \n" << "1 - plus hex\n" << "2 - minus hex\n" << "3 - multiply hex\n" << "4 - divide hex\n" << "5 - change hex\n" << "6 - compare hex\n" << "0 - exit\n";
			std::cin >> action;
			if (action == leave) { break; }
			std::cout << "Enter a number from the keyboard or import from a file? (1/2): ";
			std::cin >> enter_mode;
			if (enter_mode == 1) {        
				std::cout << "Enter Hex: ";
				std::cin.ignore();
				getline(std::cin, str);
			}
			else if (enter_mode == 2) {
				// Чтение из файла 
			}
			system("cls");
			Hex_num hex_num_second(str);
			if (action == plus) { hex_num_first += hex_num_second; }
			else if (action == minus) { hex_num_first -= hex_num_second; }
			else if (action == multiply) { hex_num_first *= hex_num_second; }
			else if (action == divide) { hex_num_first /= hex_num_second; }
			else if (action == equal) { hex_num_first = hex_num_second; }
			else if (action == compare) {
				std::cout << "Choose sign: \n" << "1 - '=='\n" << "2 - '!='\n" << "3 - '>='\n" << "4 - '>'\n" << "5 - <=\n" << "6 - <\n";
				std::cin >> action;
				system("cls");
				if (action == equals - compare) {
					if (hex_num_first == hex_num_second) { std::cout << "(" << hex_num_first << " == " << hex_num_second << ") Result compare: True\n"; }
					else { std::cout << "(" << hex_num_first << " == " << hex_num_second << ") Result compare: False\n"; }
				}
				else if (action == not_equals - compare) {
					if (hex_num_first != hex_num_second) { std::cout << "(" << hex_num_first << " != " << hex_num_second << ") Result compare: True\n"; }
					else { std::cout << "(" << hex_num_first << " != " << hex_num_second << ") Result compare: False\n"; }
				}
				else if (action == greater_equals - compare) {
					if (hex_num_first >= hex_num_second) { std::cout << "(" << hex_num_first << " >= " << hex_num_second << ") Result compare: True\n"; }
					else { std::cout << "(" << hex_num_first << " >= " << hex_num_second << ") Result compare: False\n"; }
				}
				else if (action == greater - compare) {
					if (hex_num_first > hex_num_second) { std::cout << "(" << hex_num_first << " > " << hex_num_second << ") Result compare: True\n"; }
					else { std::cout << "(" << hex_num_first << " > " << hex_num_second << ") Result compare: False\n"; }
				}
				else if (action == less_equals - compare) {
					if (hex_num_first <= hex_num_second) { std::cout << "(" << hex_num_first << " <= " << hex_num_second << ") Result compare: True\n"; }
					else { std::cout << "(" << hex_num_first << " <= " << hex_num_second << ") Result compare: False\n"; }
				}
				else if (action == less -compare) {
					if (hex_num_first < hex_num_second) { std::cout << "(" << hex_num_first << " < " << hex_num_second << ") Result compare: True\n"; }
					else { std::cout << "(" << hex_num_first << " < " << hex_num_second << ") Result compare: False\n"; }
				}
			}
			std::cout << hex_num_first;
		}
		std::cout << "Exit programm...\n";
	}
	system("Pause");
}