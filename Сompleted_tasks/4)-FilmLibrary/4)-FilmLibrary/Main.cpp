#include "FilmLibrary_Class_Header.h"
#include "Main_Functions_Header.h"

int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::vector <FilmLibrary> Films;
	//Films.emplace_back();
	/*Films.push_back(AddFilm());
	Films[0].PrintInfo();*/
	while (true) {
		int user_choose = 0;
		MenuPrint(user_choose);
		Menu_choose(user_choose, Films);
		system("pause");
		system("cls");
	}
	return 0;
}

