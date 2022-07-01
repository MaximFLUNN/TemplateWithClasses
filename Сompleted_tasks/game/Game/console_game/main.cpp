#include "Main.h"
/*
Полезные ссылки

Функции консоли: http://www.vsokovikov.narod.ru/New_MSDN_API/Console/con_fn.htm
Цвет в различных видах - https://colorscheme.ru/color-converter.html

Задание на самостоятельную работу с материалом:
- организовать мини-игру (или хотя бы часть функционала):
1) сначала предлагается настроить вид окна (цвет консоли, шрифта)
2) появляется меню игры в виде:
<< ИГРАТЬ >>
   ВЫХОД
и
   ИГРАТЬ
<< ВЫХОД >>
то есть по пунктам меню можно переходить стрелками вверх/вниз.
3) Сама игра саключается в следующем:
* задаётся набор символов (вы внутри кода сами его прописываете),
* пользователь набирает слова, которые можно составить из данного набора
(слова можно редактировать - стрелки влево вправо для проходу по слову
или попробовать самотоятельно backspace),
* пользователь подтверждает каждое введённое слово нажатием enter,
* при нажатии esc - игра прерывается и выводится меню,
* победа, если пользователь найдёт все слова (правильный и полный набор
всех слов вы прописываете к примеру вручную, генерировать не нужно).

- выделить функции (чтобы код не сидел в одном main)
- избавиться от оставшихся магических чисел.

АЛЬТЕРНАТИВНОЕ ЗАДАНИЕ: придумать применение изученному функционалу самостотельно - ЛЮБОЕ приложение.

*/
int main() {
  // задаём название консольного окна
  system("title My Application");

  // получаем дескриптор окна для обращения к консоли
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

  // устанавливаем взаимодействие с русскими буквами
  SetConsoleCP(1251);         // установка кодовой страницы win-cp 1251 в поток ввода
  SetConsoleOutputCP(1251);   // установка кодовой страницы win-cp 1251 в поток вывода

  /*

  Есть один весомый недостаток у данных функций — они работают со шрифтом Lucida Console. По умолчанию в консоли стоит шрифт Consolas.
  Поэтому в командной строке необходимо настроить используемый шрифт. Для этого открываемcmd, заходим в свойства, в закладке Шрифт выбираем Lucida Console,
  нажимаем ОК и на этом настройка завершена.

  */

  //// задаём цвет фона и текста:
  ////   второй параметр - 16-битовое беззнаковое число,
  ////   соответсвующее конкретному цвету в формате
  ////   интенсивность1-R1-G1-B1-интенсивность2-R2-G2-B2
  //SetConsoleTextAttribute(hStdOut, 2);
  //std::cout << "Меняем цвет и фон текста вер.1" << std::endl;
  //system("pause");

  ////   второй аргумент можно конструировать из набора флагов (пример 1)
  //SetConsoleTextAttribute(hStdOut,
  //  FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
  //std::cout << "Меняем цвет и фон текста вер.2" << std::endl;
  //system("pause");

  ////   второй аргумент можно конструировать из набора флагов (пример 2)
  //SetConsoleTextAttribute(hStdOut,
  //  BACKGROUND_BLUE | BACKGROUND_INTENSITY |
  //  FOREGROUND_RED | FOREGROUND_GREEN |
  //  FOREGROUND_BLUE | FOREGROUND_INTENSITY);
  //std::cout << "Меняем цвет и фон текста вер.3" << std::endl;
  //system("pause");

  //// так записываются на С++ числа в 16 системе, например, 5D эквивалентно 0x5D
  //SetConsoleTextAttribute(hStdOut, 0x70);
  //std::cout << "Меняем цвет и фон текста вер.4" << std::endl;
  //system("pause");

  int choose_pos = 2; // 0 1 2
  int iKey = 67;
  COORD cursorPos;
  cursorPos.X = 0;
  cursorPos.Y = 0;
  SetConsoleCursorPosition(hStdOut, cursorPos);
  // задаём серый фон для окна консоли и очищаем
  SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
  system("CLS");

  
  while (iKey != KEY_EXIT || iKey != KEY_ENTER) {
      switch (iKey)
      {
      case KEY_ARROW_UP:
          choose_pos--;
          choose_pos--;
      case KEY_ARROW_DOWN:
          choose_pos++;
      default:
          system("CLS");
          // Rechange
          if (choose_pos != 1 && choose_pos != 2 && choose_pos != 0) {
              choose_pos = 0;
          }

          cursorPos = { 5, 0 };
          SetConsoleCursorPosition(hStdOut, cursorPos);
          std::cout << "Start    " << std::endl;
          cursorPos = { 4, 1 };
          SetConsoleCursorPosition(hStdOut, cursorPos);
          std::cout << "Settings     " << std::endl;
          cursorPos = { 5, 2 };
          SetConsoleCursorPosition(hStdOut, cursorPos);
          std::cout << "Exit    " << std::endl;

          if (choose_pos == 0) {
              cursorPos = { 2, 0 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << "<<";
              cursorPos = { 11, 0 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << ">>";
          }
          else if (choose_pos == 1) {
              cursorPos = { 1, 1 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << "<<";
              cursorPos = { 13, 1 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << ">>";
          }
          else if (choose_pos == 2) {
              cursorPos = { 2, 2 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << "<<";
              cursorPos = { 10, 2 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << ">>";
          }
          iKey = _getch();
          break;
      }
  }




  /*cursorPos = { 5, 0 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  std::cout << "Start    " << std::endl;
  cursorPos = { 4, 1 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  std::cout << "Settings     " << std::endl;
  cursorPos = { 5, 2 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  std::cout << "Exit    " << std::endl;*/


  /*if (choose_pos == 0) {
      cursorPos = { 2, 0 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << "<<";
      cursorPos = { 11, 0 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << ">>";
  }
  else if (choose_pos == 1) {
      cursorPos = { 1, 1 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << "<<";
      cursorPos = { 13, 1 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << ">>";
  }
  else if (choose_pos == 2) {
      cursorPos = { 2, 2 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << "<<";
      cursorPos = { 10, 2 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << ">>";
  }*/

  cursorPos = { 0, 0 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  _getch();
  system("CLS");



  //std::cout << "Серое окно консоли" << std::endl;
  //system("pause");

  // битово задаём цвет (зелёный)
  int rez = (2 << 6);   // == 2 * Math.pow(2, 6) == A0 в шестнадцатиричной
  rez += (2 << 4);      // 10 -> 10000000 -> + 100000 = 10100000
                        // 1) HEX  #0A0, 2)RGB rgb(0, 170, 0)
  //SetConsoleTextAttribute(hStdOut, rez);
  //std::cout << "Сейчас цвет консоли задан как битовое число " << rez << " или 10100000 или A0" << std::endl << "Очистим консоль...";
  //system("pause");

  //system("CLS");
  //system("pause");

  // сдвигаем курсор
  //system("CLS");
  //std::cout << "А теперь сдвинем вывод текста с левого верхнего угла в другую позицию...";
  
  //SetConsoleCursorPosition(hStdOut, cursorPos);
  //std::cout << "Вывод теперь будет тут" << std::endl << "Но до первого перехода на новую строку" << std::endl;
  //system("pause");

  //SetConsoleTextAttribute(hStdOut, 0x70);
  //system("CLS");

  // печатаем таблицу цветов
  std::cout << "\n\n";
  for (int IR = 0; IR <= 3; IR++) {
    for (int k = 0; k < 3; k++) {
      for (int GB = 0; GB <= 3; GB++) {
        rez = (IR << 6) + (GB << 4);
        SetConsoleTextAttribute(hStdOut, rez);
        if (k == 1)
          std::cout << "  " << IR << " " << GB << "   ";
        else
          std::cout << "        ";
      }
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;

  // возвращаем серый цвет консоли
  /*SetConsoleTextAttribute(hStdOut, 0x70);
  system("pause");*/

  // печать прямоугольника
  //cursorPos = { 5,1 };           // к-ты левого верхнего угла
  //for (int i = 0; i < 6; i++) {
  //  SetConsoleCursorPosition(hStdOut, cursorPos);
  //  for (int j = 0; j < 6; j++) std::cout << '.';
  //  cursorPos.Y += 1;
  //}
  //std::cout << std::endl;
  //system("pause");

  //system("CLS");

  // отмечаем активное поле для ввода текста
  cursorPos = { 0, 0 };
  int len = 30;  // размер поля ввода
  SetConsoleCursorPosition(hStdOut, cursorPos);
  DWORD cWrittenChars;
  FillConsoleOutputCharacter(hStdOut, (TCHAR)'_', len, cursorPos, &cWrittenChars);  // записывает символ в экранном буфере консоли заданное число раз
  SetConsoleCursorPosition(hStdOut, cursorPos);

  // ввод текста с корректировкой по типу insert
  // выход по клавише ESC, по полю ввода можно смещаться с помощью стрелок
  iKey = 67;              // просто заглушка
  CONSOLE_SCREEN_BUFFER_INFO cbsi;

  while (iKey != KEY_EXIT && len > 0) {
    switch (iKey)
    {
    case KEY_ARROW_LEFT:
      GetConsoleScreenBufferInfo(hStdOut, &cbsi);       // извлекает информацию о заданном экранном буфере консоли
      cursorPos.X = cbsi.dwCursorPosition.X - 1;        // смещаем текущее положение курсора на символ назад
      SetConsoleCursorPosition(hStdOut, cursorPos);
      len++;
      iKey = 67;
      break;
    case KEY_ARROW_RIGHT:
      GetConsoleScreenBufferInfo(hStdOut, &cbsi);
      cursorPos.X = cbsi.dwCursorPosition.X + 1;
      SetConsoleCursorPosition(hStdOut, cursorPos);
      len--;
      iKey = 67;
      break;
    default:
      iKey = _getch();
      if (iKey == KEY_EXIT || iKey == ARROW_KEY || iKey == KEY_SPACE
        || iKey == KEY_ARROW_LEFT || iKey == KEY_ARROW_RIGHT) break;
      std::cout << (char)iKey;    // только если это символ текста отображаем его в консоль
      len--;
      break;
    }
  }

  // сохраняем полученный в консоли текст в строку (массив символов)
  wchar_t Chars[31];
  DWORD dwRead;
  ReadConsoleOutputCharacter(hStdOut, Chars, 30, { 5, 5 }, &dwRead);
  Chars[30] = '\0';
  system("CLS");

  std::cout << "Your finale text: "<< Chars << std::endl;
  system("pause");

  return 0;
}
