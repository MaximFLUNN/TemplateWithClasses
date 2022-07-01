/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
				|      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
									   | Main source file |
| [ENG] Task 1 (option 5): Develop a Time class to work with time in a format represented as a triple of hours, minutes, seconds.
The class must contain: constructors/destructor
operations: assignments, additions, subtractions, comparisons, output/input |
| [RU] Task 1 (вариант 5): Разработать класс Time для работы с временем в формате, представленным в виде тройки 
hours, minutes, seconds. Класс должен содержать: конструкторы/деструктор
оперции: присваивания, сложения, вычитания, сравнения, вывод/ввод. |
*/
#include "Time_class.h"

int main()
{
	int mode = 0;
	std::cout << "Select operating mode (1- demo | 2 - custom): ";
	std::cin >> mode;
	if (mode == 1) {
		system("cls");
		_time time_one("12:10:30");
		_time time_two("0:0:1200");
		std::cout << "[Info] Starting demo mode\n[Info] Start time: " << time_one << std::endl;
		std::cout << "[Info] Operation plus 1200 sec = 20 min \n";
		// Сблок сложения времени
		std::cout << "[Plus] (" << time_one << ") + (" << time_two << ")" << " = ";
		time_one += time_two;
		std::cout << "(" << time_one << ")" << std::endl;
		// Блок вычитания времени
		time_two = _time("6:30:30");
		std::cout << "[Minus] (" << time_one << ") - (" << time_two << ")" << " = ";
		time_one -= time_two;
		std::cout << "(" << time_one << ")" << std::endl;
		// Блок замеены времени
		time_two = _time("12:12:12");
		std::cout << "[Change] (" << time_one << ") = (" << time_two << ")" << " = ";
		time_one = time_two;
		std::cout << "(" << time_one << ")" << std::endl;
		// Блок сравнений
		std::cout << "[Compare ==] ";
		time_one.print_compare(time_two, time_one.compare(time_two));
		time_two = _time("10:20:30");
		std::cout << "[Compare >] ";
		time_one.print_compare(time_two, time_one.compare(time_two));
		time_two = _time("23:59:59");
		std::cout << "[Compare <] ";
		time_one.print_compare(time_two, time_one.compare(time_two));
	}
	else if (mode == 2) {
		std::string str;
		int action;
		std::cout << "Enter Time in format (h:m:s) or (h m s): ";
		getline(std::cin, str);
		_time time_one(str);
		while (true)
		{
			std::cout << "Enter operation: \n" << "1 - plus time\n" << "2 - minus time\n" << "3 - change time\n" << "4 - compare time\n" << "0 - exit\n";
			std::cin >> action;
			if (action == 0) { break; }
			std::cout << "Enter Time in format (h:m:s) or (h m s): ";
			std::cin.ignore();
			getline(std::cin, str);
			system("cls");
			_time time_two(str);
			if (action == plus) { time_one += time_two; }
			else if (action == minus) { time_one -= time_two; }
			else if (action == change) { time_one = time_two; }
			else if (action == compare) { 
				std::cout << "Compare time: ";
				time_one.print_compare(time_two, time_one.compare(time_two));
			}
			std::cout << "Time: " << time_one << std::endl;
		}
		std::cout << "Exit programm...\n";
	}
	system("Pause");

}

