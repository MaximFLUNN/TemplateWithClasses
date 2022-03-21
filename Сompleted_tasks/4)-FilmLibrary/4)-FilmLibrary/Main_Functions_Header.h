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
		<< "1) Добавить/изменить фильм\n"
		<< "2) Найти фильм\n"
		<< "3) Кол-во фильмов\n"
		<< "4) Удалить фильм\n"
		<< "5) Загрузить фильмотеку\n"
		<< "6) Сохранить фильмотеку\nChoose: ";
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
			<< "1) Добавить фильм в ручную\n"
			<< "2) Добавить фильм случайной генерацией\n"
			<< "3) Изменить фильм в ручную\n"
			<< "4) Изменить фильм случайной генерацией\nChoose: ";
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
			<< "1) Показать все фильмы\n"
			<< "2) Показать фильмы заданного режисёра\n"
			<< "3) Показать фильмы заданного сценариста\n"
			<< "4) Показать фильмы заданного композитора\n"
			<< "5) Показать фильмы заданного года\nChoose: ";
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
			<< "1) Кол-во всех фильмов\n"
			<< "2) Показать фильмы с наибольшими сборами\n"
			<< "3) Показать фильмы с наибольшими сборами в выбранном году\nChoose: ";
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
			<< "1) Удалить фильм по индексу\n"
			<< "2) Удалить фильм по названию\n"
			<< "3) Удалить все фильмы\nChoose: ";
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
		std::cout << "Фильм добавлен\n";
	}
	else if (user_choose == ChangeFilmCustom) {
		// code
	}
	else if (user_choose == AllFilms) {
		system("cls");
		std::cout << "Все фильмы (" << Films.size() << ") шт" << std::endl;
		for (int i = 0; i < Films.size(); i++) { 
			std::cout << i << ") ";
			Films[i].PrintInfo();
		}
	}
	else if (user_choose == CountFilms) {
		system("cls");
		std::cout << "Кол-во фильмов: " << Films.size() << std::endl;
	}
	else if (user_choose == DeleteFilm_index) {
		system("cls");
		std::cout << "Введите номер фильма: ";
		std::cin >> user_choose;
		if (user_choose <= Films.size() - 1 && Films.size() != 0) {
			Films.erase(Films.begin() + user_choose);
			std::cout << "Фильм удалён\n";
		}
		else {
			std::cout << "Введёный номер больше кол-ва фильмов!\n";
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
	std::cout << "Введите название фильма: ";
	std::cin.ignore();
	getline(std::cin, Name);
	return Name;
}

string InputFilmProducer(string Producer) {
	std::cout << "Введите имя режиссёра: ";
	getline(std::cin, Producer);
	return Producer;
}

string InputFilmScreenwriter(string Screenwriter) {
	std::cout << "Введите имя сценариста: ";
	getline(std::cin, Screenwriter);
	return Screenwriter;
}

string InputFilmComposer(string FilmComposer) {
	std::cout << "Введите имя композитора: ";
	getline(std::cin, FilmComposer);
	return FilmComposer;
}

struct Date InputFilmDate(int Numbers) {
	struct Date date;
	std::cout << "Введите год: ";
	std::cin >> Numbers;
	date.Year = Numbers;
	std::cout << "Введите месяц: ";
	std::cin >> Numbers;
	date.Month = Numbers;
	std::cout << "Введите день: ";
	std::cin >> Numbers;
	date.Day = Numbers;
	return date;
}

int InputFilmFees(int Numbers) {
	std::cout << "Введите кол-во сборов: ";
	std::cin >> Numbers;
	return Numbers;
}

class FilmLibrary RandomFiller() {
	FilmLibrary Film;
	
	return Film;
}