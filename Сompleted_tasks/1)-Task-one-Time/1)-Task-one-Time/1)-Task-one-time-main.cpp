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
#include<iostream>
#include <string>
#define SEC_IN_DAY 86400
class _time
{
private:
	int hours, minutes, seconds; // Основные перепенные времени

public:
	int day = 0; // Дополнительная переменная для подсчёта дней 

	_time() { hours = minutes = seconds = 0; } // Конструктор по умолчанию

	_time(std::string str) // Конструктор инициализации
	{
		for (int i = 0 ,_switch = hours = minutes = seconds = 0; i < str.length(); i++) {
			if (str[i] == ':' || str[i] == ' ') { _switch++; }
			if (_switch == 0 && !(str[i] == ':' || str[i] == ' ')) { hours = hours * 10 + str[i] - 0x30; }
			else if (_switch == 1 && !(str[i] == ':' || str[i] == ' ')) { minutes = minutes * 10 + str[i] - 0x30; }
			else if (_switch == 2 && !(str[i] == ':' || str[i] == ' ')) { seconds = seconds * 10 + str[i] - 0x30; }
		}	
	}
	
	_time(const _time& time) { // Конструктор копирования
		hours = time.hours;
		minutes = time.minutes;
		seconds = time.seconds;
	}

	void print() // Метод вывода информации о себе 
	{
		std::cout << "[Day " << day << "] " << "Time: " << hours << " : " << minutes << " : " << seconds << std::endl;
	}

	void update() // Метод обновления времени и приведение в правильный формат (day 0 - 48 : 0 : 120 -> day 2 - 0 : 2 : 0)
	{
		day += ((hours + (minutes + (seconds / 60)) / 60) / 24);
		hours = (hours + ((minutes + (seconds / 60)) / 60)) % 24;
		minutes = (minutes + (seconds / 60)) % 60;
		seconds %= 60;
	}

	void plus(const _time& time) // Метод складывания
	{
		seconds = (seconds + (((hours * 60) + minutes) * 60)) + (time.seconds + (((time.hours * 60) + time.minutes) * 60));
		hours = minutes = 0;
		update();
	}

	void minus(const _time& time) // Метод вычитания
	{
		seconds = (seconds + (((hours * 60) + minutes) * 60)) - (time.seconds + (((time.hours * 60) + time.minutes) * 60));
		hours = minutes = 0;
		if (seconds < 0) {
			while (seconds < 0) {
				day--;
				seconds += SEC_IN_DAY;
			} 
		}
		update();
	}

	void change(const _time& time) { // Метод замены времени
		seconds = (time.seconds + (((time.hours * 60) + time.minutes) * 60));
		hours = minutes = 0;
		update();
	}

	void compare(const _time& time) { // Метод сравнения времени
		if ((seconds + (((hours * 60) + minutes) * 60)) == (time.seconds + (((time.hours * 60) + time.minutes) * 60))) {
			std::cout << "Compare time: (" << hours << " : " << minutes << " : " << seconds << ") = (" << time.hours << " : " << time.minutes << " : " << time.seconds << ")\n";
		}
		else if ((seconds + (((hours * 60) + minutes) * 60)) > (time.seconds + (((time.hours * 60) + time.minutes) * 60))) {
			std::cout << "Compare time: (" << hours << " : " << minutes << " : " << seconds << ") > (" << time.hours << " : " << time.minutes << " : " << time.seconds << ")\n";
		}
		else if ((seconds + (((hours * 60) + minutes) * 60)) < (time.seconds + (((time.hours * 60) + time.minutes) * 60))) {
			std::cout << "Compare time: (" << hours << " : " << minutes << " : " << seconds << ") < (" << time.hours << " : " << time.minutes << " : " << time.seconds << ")\n";
		}
	}
	~_time() {} // Деструктор
};

int main()
{
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
		if (action == 1) { time_one.plus(time_two); }
		else if (action == 2) { time_one.minus(time_two); }
		else if (action == 3) { time_one.change(time_two); }
		else if (action == 4) { time_one.compare(time_two); }
		time_one.print();
	}
	system("Pause");

}

