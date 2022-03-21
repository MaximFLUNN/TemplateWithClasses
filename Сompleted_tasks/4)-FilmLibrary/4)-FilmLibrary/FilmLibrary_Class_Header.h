#pragma once
#include <iostream>
#include <vector>
#include <windows.h>                                        
#include <string>
using std::string;

// Структура хранящая дату фильма
struct Date
{
	int Day, Month, Year;
};

// Класс библиотеки фильмов
// FilmName - Название
// FilmProducer - Режиссёр
// FilmScreenwriter - Сценарист
// FilmComposer - Композитор
// FilmDate - { День, Месяц, Год }
// Fees - Сборы
class FilmLibrary
{
private:
	string FilmName;	
	string FilmProducer; 
	string FilmScreenwriter; 
	string FilmComposer;
	Date FilmDate;			 
	int Fees;				 
public:
	// Конструкторы | Деструкторы
	FilmLibrary();
	FilmLibrary(string _FilmName, string _FilmProducer, string _FilmScreenwriter, string _FilmComposer, Date _FilmDate, int _Fees);
	FilmLibrary(const FilmLibrary& Film);
	~FilmLibrary();

	void PrintInfo() {
		std::cout << "| " << FilmName << " | " << FilmProducer << " | " << FilmScreenwriter
			<< " | " << FilmComposer << " | " << FilmDate.Day << "." << FilmDate.Month
			<< "." << FilmDate.Year << " | " << Fees << " |\n";
	}

	/*---------------- = Геттеры = ------------------*/
	string GetFilmName();
	string GetFilmProducer();
	string GetFilmScreenwriter();
	string GetFilmComposer();
	struct Date GetFilmDate();
	int GetFilmDate_day();
	int GetFilmDate_month();
	int GetFilmDate_year();
	int GetFees();

	/*---------------- = Сеттеры = ------------------*/
	void SetFilmName(string _FilmName);
	void SetFilmProducer(string _FilmProducer);
	void SetFilmScreenwriter(string _FilmScreenwriter);
	void SetFilmComposer(string _FilmComposer);
	void SetFilmDate_All(struct Date _FilmDate);
	void SetFilmDate_Day(int _Day);
	void SetFilmDate_Month(int _Month);
	void SetFilmDate_Year(int _Year);
	void SetFilmFees(int _Fees);
};