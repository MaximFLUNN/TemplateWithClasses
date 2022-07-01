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

// Главная функция main
int main() {
	// Классы для работы с файлами и потоками ввода/вывода
	std::ifstream input_file;
	std::ofstream output_file;

	int mode = 0;
	std::cout << "Select operating mode (1- demo | 2 - custom): ";
	std::cin >> mode;

	// Демонстрационный режим, нужен для быстрой проверки работоспособности и ускоренной проверки
	if (mode == 1) {
		// Меременные
		std::string res;
		int ind = 0;
		system("cls");

		// Два класса созданный конструктором инициализации
		Hex_num num_one("12F");
		Hex_num num_two("A");

		// Поток текста и вывод надальной переменной
		std::cout << "=====================================================" << std::endl;
		std::cout << "[Info] Starting demo mode\n[Info] Start hex: " << num_one << std::endl;
		std::cout << "=====================================================" << std::endl;

		// Проверка работы индексации
		if (num_one[ind] == '\0') { res = "out of memory"; }
		else { res = num_one[ind]; }
		std::cout << "[Index] hex[" << ind << "] = " << res << std::endl;
		if (num_one[++ind] == '\0') { res = "out of memory"; }
		else { res = num_one[ind]; }
		std::cout << "[Index] hex[" << ind << "] = " << res << std::endl;
		if (num_one[++ind] == '\0') { res = "out of memory"; }
		else { res = num_one[ind]; }
		std::cout << "[Index] hex[" << ind << "] = " << res << std::endl;
		if (num_one[++ind] == '\0') { res = "out of memory"; }
		else { res = num_one[ind]; }
		std::cout << "[Index] hex[" << ind << "] = " << res << std::endl;
		std::cout << "=====================================================" << std::endl;

		// Проверка сложения 
		std::cout << "[Plus] (" << num_one << ") + (" << num_two << ")" << " = ";
		num_one += num_two;
		std::cout << "(" << num_one << ")" << std::endl;

		// Проверка вычитания 
		num_two = Hex_num("C");
		std::cout << "[Minus] (" << num_one << ") - (" << num_two << ")" << " = ";
		num_one -= num_two;
		std::cout << "(" << num_one << ")" << std::endl;

		// Проверка умножения
		num_two = Hex_num("2");
		std::cout << "[Multiply] (" << num_one << ") * (" << num_two << ")" << " = ";
		num_one *= num_two;
		std::cout << "(" << num_one << ")" << std::endl;

		// Проверка деления 
		num_two = num_one;
		std::cout << "[Divide] (" << num_one << ") / (" << num_two << ")" << " = ";
		num_one /= num_two;
		std::cout << "(" << num_one << ")" << std::endl;

		// Проверка замеены
		num_two = Hex_num("12F");
		std::cout << "[Change] (" << num_one << ") = (" << num_two << ")" << " = ";
		num_one = num_two;
		std::cout << "(" << num_one << ")" << std::endl;
		std::cout << "=====================================================" << std::endl;

		// Проверка сравнений
		std::cout << "[ == ] ";
		nums_compare(equals - (compare + 1), num_one, num_two);
		std::cout << "[ != ] ";
		nums_compare(not_equals - (compare + 1), num_one, num_two);
		std::cout << "[ >= ] ";
		nums_compare(greater_equals - (compare + 1), num_one, num_two);
		std::cout << "[ > ] ";
		nums_compare(greater - (compare + 1), num_one, num_two);
		std::cout << "[ <= ] ";
		nums_compare(less_equals - (compare + 1), num_one, num_two);
		std::cout << "[ < ] ";
		nums_compare(less - (compare + 1), num_one, num_two);
		std::cout << "=====================================================" << std::endl;
		
		// Проверка записи и чтения
		num_two = Hex_num("12AF");
		output_file.open("file.txt");
		output_file << num_two;
		output_file.close();
		std::cout << "[Write] hex: " << num_two << std::endl;
		input_file.open("file.txt");
		input_file >> res;
		input_file.close();
		num_two = Hex_num(res);
		std::cout << "[Read] hex in file = " << num_two << std::endl;
		std::cout << "=====================================================" << std::endl;
		std::cout << "Demo mode ended" << std::endl;
		std::cout << "=====================================================" << std::endl;
	}

	// Обычный режим работы
	else if (mode == 2) {
		// Переменные
		std::string str;
		int action, enter_mode;

		// Выбор между вводом с клавиатуры и чтением из файла
		std::cout << "Enter a number from the keyboard or import from a file? (1/2): ";
		std::cin >> enter_mode;

		// Ввод с клавиатуры и считывание символов и потока консоли 
		if (enter_mode == 1) {
			std::cout << "Enter Hex: ";
			std::cin.ignore();
			getline(std::cin, str);
		}
		// Считывание символов из текстового файла
		else if (enter_mode == 2) {
			input_file.open("file.txt");
			getline(input_file, str);
			input_file.close();
		}
		// Создание первого класса hex
		Hex_num hex_num_first(str);
		while (true)
		{
			// Выбор между операциями
			std::cout << "Enter operation: \n" << "1 - plus hex\n" << "2 - minus hex\n" << "3 - multiply hex\n" << "4 - divide hex\n" << "5 - change hex\n" << "6 - compare hex\n" << "7 - index operation\n" << "0 - exit\n";
			std::cin >> action;

			// Выход из программы если введён ноль (0 = leave в enum)
			if (action == leave) { break; }

			// Если выбрана оперцация не проверки индекса
			if (action != index) {
				// Выбор между вводом с клавиатуры и чтением из файла
				std::cout << "Enter a number from the keyboard or import from a file? (1/2): ";
				std::cin >> enter_mode;

				// Ввод с клавиатуры и считывание символов и потока консоли 
				if (enter_mode == 1) {
					std::cout << "Enter Hex: ";
					std::cin.ignore();
					getline(std::cin, str);
				}
				// Считывание символов из текстового файла
				else if (enter_mode == 2) {
					input_file.open("file.txt");
					input_file >> str;
					input_file.close();
				}

				// Очистка консоли
				system("cls");

				// Создание второго класса hex
				Hex_num hex_num_second(str);

				// Метод проверки активного действия с классами (=, -, *, /, сравнить)
				action_active(action, hex_num_first, hex_num_second);

				// Вывод hex в консоль
				std::cout << hex_num_first << std::endl;

				// Запись hex в файл
				output_file.open("file.txt");
				output_file << hex_num_first;
				output_file.close();
			}
			// Если выбрана проверка индекса
			else if (action == index) {
				// Очистка консоли
				system("cls");

				// Ввод нужного индекса
				std::cout << "Enter index: " << std::endl;
				std::cin >> action;

				// Переменная проверки индекса (Вывод символа если индекс существует или ошибку выхода за память если не существует) 
				std::string result;

				// Проверка если индекс пуст результату присвоить выход за мапять
				if (hex_num_first[action] == '\0') { result = "out of memory"; }

				// Иначе вывести символ 16 ричной системы счисления (Hex)
				else { result = hex_num_first[action]; }

				// Вывод
				std::cout << "Index[" << action << "] = " << result << std::endl;
			}
		}
		// Очистка консоли
		system("cls");
		std::cout << "Exit programm...\n";
	}
	system("Pause");
}
// Функция проверки активного действия (+, -, *, /, сравнения)
void action_active(int action, Hex_num hex_num_first, Hex_num hex_num_second) {
	if (action == plus) { hex_num_first += hex_num_second; }
	else if (action == minus) { hex_num_first -= hex_num_second; }
	else if (action == multiply) { hex_num_first *= hex_num_second; }
	else if (action == divide) { hex_num_first /= hex_num_second; }
	else if (action == equal) { hex_num_first = hex_num_second; }
	else if (action == compare) {
		// Если выбрано сравнение выводит доступные сравнения
		std::cout << "Choose sign: \n" << "1 - '=='\n" << "2 - '!='\n" << "3 - '>='\n" << "4 - '>'\n" << "5 - <=\n" << "6 - <\n";
		std::cin >> action;
		system("cls");
		// Сравнения переменных и вывод результата
		nums_compare(action, hex_num_first, hex_num_second);
	}
}

void nums_compare(int action, Hex_num hex_num_first, Hex_num hex_num_second) {
	// Сравнение по знаку ( == )
	if (action == equals - (compare + 1)) {
		if (hex_num_first == hex_num_second) { std::cout << "Compare (" << hex_num_first << " == " << hex_num_second << ") Result: True\n"; }
		else { std::cout << "Compare (" << hex_num_first << " == " << hex_num_second << ") Result: False\n"; }
	}
	// Сравнение по знаку ( != )
	else if (action == not_equals - (compare + 1)) {
		if (hex_num_first != hex_num_second) { std::cout << "Compare (" << hex_num_first << " != " << hex_num_second << ") Resulte: True\n"; }
		else { std::cout << "Compare (" << hex_num_first << " != " << hex_num_second << ") Result: False\n"; }
	}
	// Сравнение по знаку ( >= )
	else if (action == greater_equals - (compare + 1)) {
		if (hex_num_first >= hex_num_second) { std::cout << "Compare (" << hex_num_first << " >= " << hex_num_second << ") Result: True\n"; }
		else { std::cout << "Compare (" << hex_num_first << " >= " << hex_num_second << ") Result: False\n"; }
	}
	// Сравнение по знаку ( > )
	else if (action == greater - (compare + 1)) {
		if (hex_num_first > hex_num_second) { std::cout << "Compare (" << hex_num_first << " > " << hex_num_second << ") Result: True\n"; }
		else { std::cout << "Compare (" << hex_num_first << " > " << hex_num_second << ") Result: False\n"; }
	}
	// Сравнение по знаку ( <= )
	else if (action == less_equals - (compare + 1)) {
		if (hex_num_first <= hex_num_second) { std::cout << "Compare (" << hex_num_first << " <= " << hex_num_second << ") Result: True\n"; }
		else { std::cout << "Compare (" << hex_num_first << " <= " << hex_num_second << ") Result: False\n"; }
	}
	// Сравнение по знаку ( < )
	else if (action == less - (compare + 1)) {
		if (hex_num_first < hex_num_second) { std::cout << "Compare (" << hex_num_first << " < " << hex_num_second << ") Result: True\n"; }
		else { std::cout << "Compare (" << hex_num_first << " < " << hex_num_second << ") Result: False\n"; }
	}
}