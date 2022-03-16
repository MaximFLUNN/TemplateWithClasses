/*
                | Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
                |      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
                                       | Main header file |
| [ENG] Task 3 (option 5): Create class TextEditor. The class must provide the ability to place in the selected
position of the console window a field of specified length for entering a sequence of characters from the keyboard. The minimum length
sequence must not exceed the length of the input.
| [RU] Task 3 (вариант 5): Создать класс TextEditor. Класс должен предоставлять возможность разместить в выбранной
позиции окна консоли поле заданной длины для ввода с клавиатуры последовательности символов. В минимальном варианте длина
последовательности не должна превышать длину ввода.
*/

#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8


#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80

// –исует кнопки меню
void DrawMenuButtons(COORD cursorPos, HANDLE hStdOut) {
    cursorPos = { 5, 0 };
    SetConsoleCursorPosition(hStdOut, cursorPos);
    std::cout << "Play    " << std::endl;
    cursorPos = { 4, 1 };
    SetConsoleCursorPosition(hStdOut, cursorPos);
    std::cout << "Option     " << std::endl;
    cursorPos = { 5, 2 };
    SetConsoleCursorPosition(hStdOut, cursorPos);
    std::cout << "Exit    " << std::endl;
}
// –исует стрелки вокруг кнопок меню
void DrawMenuArrows(COORD cursorPos, HANDLE hStdOut, int choose_pos) {
    if (choose_pos == 0) {
        cursorPos = { 2, 0 };
        SetConsoleCursorPosition(hStdOut, cursorPos);
        std::cout << "<<";
        cursorPos = { 10, 0 };
        SetConsoleCursorPosition(hStdOut, cursorPos);
        std::cout << ">>";
    }
    else if (choose_pos == 1) {
        cursorPos = { 1, 1 };
        SetConsoleCursorPosition(hStdOut, cursorPos);
        std::cout << "<<";
        cursorPos = { 11, 1 };
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
}
// ќбща¤ функци¤ рисовки menu
void DrawMenu(COORD cursorPos, HANDLE hStdOut, int choose_pos) {
    DrawMenuButtons(cursorPos, hStdOut);
    DrawMenuArrows(cursorPos, hStdOut, choose_pos);
    cursorPos = { 0, 0 };
}

void ConsoleMove(HANDLE hStdOut, COORD cursorPos, CONSOLE_SCREEN_BUFFER_INFO& cbsi, int back_number) {
    GetConsoleScreenBufferInfo(hStdOut, &cbsi); // извлекает информацию о заданном экранном буфере консоли
    cursorPos.X = cbsi.dwCursorPosition.X + back_number; // смещаем текущее положение курсора на символ назад
    SetConsoleCursorPosition(hStdOut, cursorPos);
}

class TextEditor {
private:
    COORD startPos;
    int choose_pos = 0, iKey = 67, len;
public:
    TextEditor() {
        startPos = { 0 };
        choose_pos = 0;
        iKey = 67;
        len = 30;
    }

    TextEditor(COORD _startPos, int _len) {
        startPos = _startPos;
        len = _len;
    }

    TextEditor(TextEditor& clone) {
        startPos = clone.startPos;
        choose_pos = clone.choose_pos;
        iKey = clone.iKey;
        len = clone.len;
    }

    void Line(HANDLE& hStdOut, COORD& cursorPos) {
        // отмечаем активное поле дл¤ ввода текста
        cursorPos = startPos;
        int lenght = len;
        SetConsoleCursorPosition(hStdOut, cursorPos);
        DWORD cWrittenChars;
        FillConsoleOutputCharacter(hStdOut, (TCHAR)'_', lenght, startPos, &cWrittenChars);  // записывает символ в экранном буфере консоли заданное число раз
        SetConsoleCursorPosition(hStdOut, cursorPos);


        iKey = (int)'_';              // просто заглушка
        CONSOLE_SCREEN_BUFFER_INFO cbsi;

        while (iKey != KEY_EXIT && lenght > 0) {
            iKey = _getch();
            if (iKey == ARROW_KEY) { continue; }
            if (iKey == KEY_ARROW_LEFT) {
                ConsoleMove(hStdOut, cursorPos, cbsi, -1);
                lenght++;
            }
            if (iKey == KEY_ARROW_RIGHT) {
                ConsoleMove(hStdOut, cursorPos, cbsi, 1);
                lenght--;
            }
            if (iKey == KEY_BACKSPACE) {
                lenght++;
                ConsoleMove(hStdOut, cursorPos, cbsi, -1);
                std::cout << '_';
                ConsoleMove(hStdOut, cursorPos, cbsi, -1);
            }
            if (iKey == KEY_EXIT || iKey == KEY_ENTER) { break; }
            if (iKey != KEY_BACKSPACE && iKey != KEY_ARROW_LEFT && iKey != KEY_ARROW_RIGHT) {
                std::cout << (char)iKey;
                lenght--;
            }    // только если это символ текста отображаем его в консоль

        }
        SetConsoleCursorPosition(hStdOut, startPos);

        // сохран¤ем полученный в консоли текст в строку (массив символов)
        wchar_t* Chars = new wchar_t[len];
        DWORD dwRead;
        ReadConsoleOutputCharacter(hStdOut, Chars, len, startPos, &dwRead);
        Chars[len] = 0;
        system("CLS");
        std::wcout << "Your finale text: " << Chars << std::endl;
        std::cout << std::endl;
        system("pause");
    }

    void Set_iKey(int key) { iKey = key; }
    int Get_iKey() { return iKey; }

    void Set_choose_pos(int _choose_pos) { choose_pos = _choose_pos; }
    int Get_choose_pos() { return choose_pos; }


    ~TextEditor() {}

};