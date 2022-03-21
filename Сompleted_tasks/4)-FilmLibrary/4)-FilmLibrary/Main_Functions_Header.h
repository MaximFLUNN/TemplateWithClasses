#pragma once
#include "FilmLibrary_Class_Header.h"

void MenuPrint(int& user_choose);
void Menu_choose(int user_choose, std::vector <FilmLibrary>& Films);
class FilmLibrary AddFilm();
string InputFilmName(string Name);
string InputFilmProducer(string Producer);
string InputFilmScreenwriter(string Screenwriter);
string InputFilmComposer(string FilmComposer);
struct Date InputFilmDate(int Numbers);
int InputFilmFees(int Numbers);

enum choose {
	IvalidValue,
	AddFilmCustom,
	AddFilmRandom,
	ChangeFilmCustom,
	ChangeFilmRandom,
	FindFilm_name_year,
	AllFilms,
	AllFilms_producer,
	AllFilms_composer,
	AllFilms_screenwriter,
	AllFilms_year,
	CountFilmsMaxFees,
	CountFilmsMaxFeesInYear,
	CountFilms,
	DeleteFilm_all,
	DeleteFilm_index,
	DeleteFilm_name,
	LoadFilmLibrary,
	SaveFilmLibrary
};

void MenuPrint(int& user_choose) {
	std::cout
		<< "1) ��������/�������� �����\n"
		<< "2) ����� �����\n"
		<< "3) ���-�� �������\n"
		<< "4) ������� �����\n"
		<< "5) ��������� ����������\n"
		<< "6) ��������� ����������\nChoose: ";
	std::cin >> user_choose;
	if (user_choose <= 6 && user_choose >= 1) {
		if (user_choose == 1) { user_choose = AddFilmCustom; }
		else if (user_choose == 2) { user_choose = AllFilms; }
		else if (user_choose == 3) { user_choose = CountFilms; }
		else if (user_choose == 4) { user_choose = DeleteFilm_all; }
		else if (user_choose == 5) { user_choose = LoadFilmLibrary; }
		else if (user_choose == 6) { user_choose = SaveFilmLibrary; }
	}
	else { 
		user_choose = IvalidValue; 
		return;
	}
	system("cls");
	if (user_choose == AddFilmCustom) {
		std::cout
			<< "1) �������� ����� � ������\n"
			<< "2) �������� ����� ��������� ����������\n"
			<< "3) �������� ����� � ������\n"
			<< "4) �������� ����� ��������� ����������\nChoose: ";
		std::cin >> user_choose;
		if (user_choose <= 4 && user_choose >= 1) {
			if (user_choose == 1) { user_choose = AddFilmCustom; }
			else if (user_choose == 2) { user_choose = AddFilmRandom; }
			else if (user_choose == 3) { user_choose = ChangeFilmCustom; }
			else if (user_choose == 4) { user_choose = ChangeFilmRandom; }
		}
		else {
			user_choose = IvalidValue;
			return;
		}
	}
	else if (user_choose == AllFilms) {
		std::cout
			<< "1) �������� ��� ������\n"
			<< "2) �������� ������ ��������� �������\n"
			<< "3) �������� ������ ��������� ����������\n"
			<< "4) �������� ������ ��������� �����������\n"
			<< "5) �������� ������ ��������� ����\nChoose: ";
		std::cin >> user_choose;
		if (user_choose <= 5 && user_choose >= 1) {
			if (user_choose == 1) { user_choose = AllFilms; }
			else if (user_choose == 2) { user_choose = AllFilms_producer; }
			else if (user_choose == 3) { user_choose = AllFilms_screenwriter; }
			else if (user_choose == 4) { user_choose = AllFilms_composer; }
			else if (user_choose == 5) { user_choose = AllFilms_year; }
		}
		else {
			user_choose = IvalidValue;
			return;
		}
	}
	else if (user_choose == CountFilms) {
		std::cout
			<< "1) ���-�� ���� �������\n"
			<< "2) �������� ������ � ����������� �������\n"
			<< "3) �������� ������ � ����������� ������� � ��������� ����\nChoose: ";
		std::cin >> user_choose;
		if (user_choose <= 3 && user_choose >= 1) {
			if (user_choose == 1) { user_choose = CountFilms; }
			else if (user_choose == 2) { user_choose = CountFilmsMaxFees; }
			else if (user_choose == 3) { user_choose = CountFilmsMaxFeesInYear; }
		}
		else {
			user_choose = IvalidValue;
			return;
		}
	}
	else if (user_choose == DeleteFilm_all) {
		std::cout
			<< "1) ������� ����� �� �������\n"
			<< "2) ������� ����� �� ��������\n"
			<< "3) ������� ��� ������\nChoose: ";
		std::cin >> user_choose;
		if (user_choose <= 3 && user_choose >= 1) {
			if (user_choose == 1) { user_choose = DeleteFilm_index; }
			else if (user_choose == 2) { user_choose = DeleteFilm_name; }
			else if (user_choose == 3) { user_choose = DeleteFilm_all; }
		}
		else {
			user_choose = IvalidValue;
			return;
		}
	}
}

void Menu_choose(int user_choose, std::vector <FilmLibrary>& Films) {
	if (user_choose == AddFilmCustom) {
		system("cls");
		Films.push_back(AddFilm());
		system("cls");
		std::cout << "����� ��������\n";
	}
	else if (user_choose == ChangeFilmCustom) {
		// code
	}
	else if (user_choose == AllFilms) {
		system("cls");
		std::cout << "��� ������ (" << Films.size() << ") ��" << std::endl;
		for (int i = 0; i < Films.size(); i++) { 
			std::cout << i << ") ";
			Films[i].PrintInfo();
		}
	}
	else if (user_choose == CountFilms) {
		system("cls");
		std::cout << "���-�� �������: " << Films.size() << std::endl;
	}
	else if (user_choose == DeleteFilm_index) {
		system("cls");
		std::cout << "������� ����� ������: ";
		std::cin >> user_choose;
		if (user_choose <= Films.size() - 1 && Films.size() != 0) {
			Films.erase(Films.begin() + user_choose);
			std::cout << "����� �����\n";
		}
		else {
			std::cout << "������� ����� ������ ���-�� �������!\n";
		}
	}
}

class FilmLibrary AddFilm() {
	FilmLibrary Film;
	string Input;
	int Numbers = 0;
	Film.SetFilmName(InputFilmName(Input));
	Film.SetFilmProducer(InputFilmProducer(Input));
	Film.SetFilmScreenwriter(InputFilmScreenwriter(Input));
	Film.SetFilmComposer(InputFilmComposer(Input));
	Film.SetFilmDate_All(InputFilmDate(Numbers));
	Film.SetFilmFees(InputFilmFees(Numbers));
	//Film = FilmLibrary(InputFilmName(Input), InputFilmProducer(Input), InputFilmScreenwriter(Input), InputFilmComposer(Input), InputFilmDate(Numbers), InputFilmFees(Numbers));
	return Film;
}

string InputFilmName(string Name) {
	std::cout << "������� �������� ������: ";
	std::cin.ignore();
	getline(std::cin, Name);
	return Name;
}

string InputFilmProducer(string Producer) {
	std::cout << "������� ��� ��������: ";
	getline(std::cin, Producer);
	return Producer;
}

string InputFilmScreenwriter(string Screenwriter) {
	std::cout << "������� ��� ����������: ";
	getline(std::cin, Screenwriter);
	return Screenwriter;
}

string InputFilmComposer(string FilmComposer) {
	std::cout << "������� ��� �����������: ";
	getline(std::cin, FilmComposer);
	return FilmComposer;
}

struct Date InputFilmDate(int Numbers) {
	struct Date date;
	std::cout << "������� ���: ";
	std::cin >> Numbers;
	date.Year = Numbers;
	std::cout << "������� �����: ";
	std::cin >> Numbers;
	date.Month = Numbers;
	std::cout << "������� ����: ";
	std::cin >> Numbers;
	date.Day = Numbers;
	return date;
}

int InputFilmFees(int Numbers) {
	std::cout << "������� ���-�� ������: ";
	std::cin >> Numbers;
	return Numbers;
}

class FilmLibrary RandomFiller() {
	FilmLibrary Film;
	
	return Film;
}