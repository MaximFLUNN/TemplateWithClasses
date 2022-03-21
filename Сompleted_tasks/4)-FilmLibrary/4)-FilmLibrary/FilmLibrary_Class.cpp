#include "FilmLibrary_Class_Header.h"
// Конструктор по умолчанию
FilmLibrary::FilmLibrary(){
	FilmName = "Unknown";
	FilmProducer = "None";
	FilmScreenwriter = "None";
	FilmComposer = "None";
	FilmDate = { 0 };
	Fees = 0;
}
// Конструктор инициализации
FilmLibrary::FilmLibrary(string _FilmName,	string _FilmProducer, string _FilmScreenwriter, string _FilmComposer, Date _FilmDate,int _Fees) {
	FilmName = _FilmName;
	FilmProducer = _FilmProducer;
	FilmScreenwriter = _FilmScreenwriter;
	FilmComposer = _FilmComposer;
	FilmDate = _FilmDate;
	Fees = _Fees;
}
// Конструктор копирования
FilmLibrary::FilmLibrary(const FilmLibrary& Film) {
	FilmName = Film.FilmName;
	FilmProducer = Film.FilmProducer;
	FilmScreenwriter = Film.FilmScreenwriter;
	FilmComposer = Film.FilmComposer;
	FilmDate = Film.FilmDate;
	Fees = Film.Fees;
}
// Деструктор
FilmLibrary::~FilmLibrary(){}

/*---------------- = Геттеры = ------------------*/
string FilmLibrary::GetFilmName() { return FilmName; }
string FilmLibrary::GetFilmProducer() { return FilmProducer; }
string FilmLibrary::GetFilmScreenwriter() { return FilmScreenwriter; }
string FilmLibrary::GetFilmComposer() { return FilmComposer; }
struct Date FilmLibrary::GetFilmDate() { return FilmDate; }
int FilmLibrary::GetFilmDate_day() { return FilmDate.Day; }
int FilmLibrary::GetFilmDate_month() { return FilmDate.Month; }
int FilmLibrary::GetFilmDate_year() { return FilmDate.Year; }
int FilmLibrary::GetFees() { return Fees; }

/*---------------- = Сеттеры = ------------------*/
void FilmLibrary::SetFilmName(string _FilmName) { FilmName = _FilmName; }
void FilmLibrary::SetFilmProducer(string _FilmProducer) { FilmProducer = _FilmProducer; }
void FilmLibrary::SetFilmScreenwriter(string _FilmScreenwriter) { FilmScreenwriter = _FilmScreenwriter; }
void FilmLibrary::SetFilmComposer(string _FilmComposer) { FilmComposer = _FilmComposer; }
void FilmLibrary::SetFilmDate_All(struct Date _FilmDate) { FilmDate = _FilmDate; }
void FilmLibrary::SetFilmDate_Day(int _Day) { FilmDate.Day = _Day; }
void FilmLibrary::SetFilmDate_Month(int _Month) { FilmDate.Month = _Month; }
void FilmLibrary::SetFilmDate_Year(int _Year) { FilmDate.Year = _Year; }
void FilmLibrary::SetFilmFees(int _Fees) { Fees = _Fees; }