/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
				|      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
									   | Time class source file |
| [ENG] Task 1 (option 5): Develop a Time class to work with time in a format represented as a triple of hours, minutes, seconds.
The class must contain: constructors/destructor
operations: assignments, additions, subtractions, comparisons, output/input |
| [RU] Task 1 (вариант 5): Разработать класс Time для работы с временем в формате, представленным в виде тройки
hours, minutes, seconds. Класс должен содержать: конструкторы/деструктор
оперции: присваивания, сложения, вычитания, сравнения, вывод/ввод. |
*/
#include "Time_class.h"

// Конструктор по умолчанию
_time::_time() { hours = minutes = seconds = 0; }

// Конструктор инициализации
_time::_time(std::string str)
{
	for (int i = 0, _switch = hours = minutes = seconds = 0; i < str.length(); i++) {
		if (str[i] == ':' || str[i] == ' ') { _switch++; }
		if (_switch == 0 && !(str[i] == ':' || str[i] == ' ')) { hours = hours * 10 + str[i] - 0x30; }
		else if (_switch == 1 && !(str[i] == ':' || str[i] == ' ')) { minutes = minutes * 10 + str[i] - 0x30; }
		else if (_switch == 2 && !(str[i] == ':' || str[i] == ' ')) { seconds = seconds * 10 + str[i] - 0x30; }
	}
}

// Конструктор копирования
_time::_time(const _time & time) {
	hours = time.hours;
	minutes = time.minutes;
	seconds = time.seconds;
}

// Деструктор
_time::~_time() {}

// Операция складывания
void _time::operator += (const _time& time) 
{
	seconds = (seconds + (((hours * MINUTES_IN_HOUR) + minutes) * SECONDS_IN_MINUTE)) + (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE));
	hours = minutes = 0;
	update(0);
}

// Операция вычитания
void _time::operator -= (const _time& time)
{
	int day;
	seconds = (seconds + (((hours * MINUTES_IN_HOUR) + minutes) * SECONDS_IN_MINUTE)) - (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE));
	hours = minutes = day = 0;
	if (seconds < 0) {
		while (seconds < 0) {
			day--;
			seconds += SECONDS_IN_DAY;
		}
	}
	update(day);
}

// Операция замены времени
void _time::operator = (const _time& time) {
	seconds = (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE));
	hours = minutes = 0;
	update(0);
}

// Операция сравнения времени (равно)
bool _time::operator == (const _time& time) {
	if ((seconds + (((hours * MINUTES_IN_HOUR) + minutes) * SECONDS_IN_MINUTE)) == (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE))) { return true; }
	return false;
}

// Операция сравнения времени (больше)
bool _time::operator > (const _time& time) {
	if ((seconds + (((hours * MINUTES_IN_HOUR) + minutes) * SECONDS_IN_MINUTE)) > (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE))) { return true; }
	return false;
}

// Операция сравнения времени (меньше)
bool _time::operator < (const _time& time) {
	if ((seconds + (((hours * MINUTES_IN_HOUR) + minutes) * SECONDS_IN_MINUTE)) < (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE))) { return true; }
	return false;
}

// Операция сравнения времени (не равно)
bool _time::operator != (const _time& time) {
	if ((seconds + (((hours * MINUTES_IN_HOUR) + minutes) * SECONDS_IN_MINUTE)) != (time.seconds + (((time.hours * MINUTES_IN_HOUR) + time.minutes) * SECONDS_IN_MINUTE))) { return true; }
	return false;
}

// Оператор вывода
std::ostream& operator << (std::ostream& out, _time& time) {
	out << time.hours << " : " << time.minutes << " : " << time.seconds;
	return out;
}

// Метод стравнения
int _time::compare(const _time& time) {
	if (*this == time) { return equals; }
	else if (*this > time) { return greater; }
	else if (*this < time) { return less; }
	return false;
}

// Операция вывода информации о сравнении 
void _time::print_compare(const _time& time, int compare) {
	if (compare == equals) {
		std::cout << "(" << hours << " : " << minutes << " : " << seconds << ") = (" << time.hours << " : " << time.minutes << " : " << time.seconds << ")\n";
	}
	else if (compare == greater) {
		std::cout << "(" << hours << " : " << minutes << " : " << seconds << ") > (" << time.hours << " : " << time.minutes << " : " << time.seconds << ")\n";
	}
	else if (compare == less) {
		std::cout << "(" << hours << " : " << minutes << " : " << seconds << ") < (" << time.hours << " : " << time.minutes << " : " << time.seconds << ")\n";
	}
}


// Метод обновления времени и приведение в правильный формат (day 0 - 48 : 0 : 120 -> day 2 - 0 : 2 : 0)
void _time::update(int day) {
	if ((day + ((hours + (minutes + (seconds / SECONDS_IN_MINUTE)) / MINUTES_IN_HOUR) / HOURS_IN_DAY)) != 0) {
		std::cout << "Days later: " << day + ((hours + (minutes + (seconds / SECONDS_IN_MINUTE)) / MINUTES_IN_HOUR) / HOURS_IN_DAY) << std::endl;
	}
	hours = (hours + ((minutes + (seconds / SECONDS_IN_MINUTE)) / MINUTES_IN_HOUR)) % HOURS_IN_DAY;
	minutes = (minutes + (seconds / SECONDS_IN_MINUTE)) % SECONDS_IN_MINUTE;
	seconds %= SECONDS_IN_MINUTE;
}