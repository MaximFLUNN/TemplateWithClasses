/*
                | Copyright 2022 | MaximFLUNN | Maxim Filatov Group: 3821B1PR2 |
                |      GitHub profile link: https://github.com/MaximFLUNN      |
-------------------------------------------------------------------------------------------------------
                                       | Main source file |
| [ENG] Task 3 (option 5): Create class TextEditor. The class must provide the ability to place in the selected
position of the console window a field of specified length for entering a sequence of characters from the keyboard. The minimum length
sequence must not exceed the length of the input.
| [RU] Task 3 (вариант 5): Создать класс TextEditor. Класс должен предоставлять возможность разместить в выбранной
позиции окна консоли поле заданной длины для ввода с клавиатуры последовательности символов. В минимальном варианте длина
последовательности не должна превышать длину ввода.
*/
#include "3)-Main-Text-Editor.h"

int main() {
    // задаём название консольного окна
    system("title OneLineEditor");

    // получаем дескриптор окна для обращения к консоли
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    // устанавливаем взаимодействие с русскими буквами
    SetConsoleCP(1251);         // установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251);   // установка кодовой страницы win-cp 1251 в поток вывода
    int choose = 0, lenght = 1;
    COORD cursorPos, startPos;
    cursorPos.X = startPos.X = 0;
    cursorPos.Y = startPos.Y = 0;
    SetConsoleCursorPosition(hStdOut, cursorPos);
    // задаём серый фон для окна консоли и очищаем
    SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);

    TextEditor OneLineEditor;
    //system("CLS");
    while (true) {
        while (OneLineEditor.Get_iKey() != KEY_EXIT && OneLineEditor.Get_iKey() != KEY_ENTER) {
            if (OneLineEditor.Get_iKey() == KEY_ARROW_UP) { OneLineEditor.Set_choose_pos(OneLineEditor.Get_choose_pos() - 1); }
            else if (OneLineEditor.Get_iKey() == KEY_ARROW_DOWN) { OneLineEditor.Set_choose_pos(OneLineEditor.Get_choose_pos() + 1); }
            if (OneLineEditor.Get_choose_pos() > 2) { OneLineEditor.Set_choose_pos(0); }
            else if (OneLineEditor.Get_choose_pos() < 0) { OneLineEditor.Set_choose_pos(2); }
            system("CLS");
            DrawMenu(cursorPos, hStdOut, OneLineEditor.Get_choose_pos());
            OneLineEditor.Set_iKey(_getch());
        }
        if (OneLineEditor.Get_choose_pos() == 0 && OneLineEditor.Get_iKey() != KEY_EXIT) {
            system("CLS");
            OneLineEditor = TextEditor(startPos, lenght);
            OneLineEditor.Line(hStdOut, cursorPos);
        }
        else if (OneLineEditor.Get_choose_pos() == 1 && OneLineEditor.Get_iKey() != KEY_EXIT) {
            system("CLS");
            while (true) {
                system("CLS");
                std::cout << "1) Change lenght\n2) Change position\n3) Exit" << std::endl;
                std::cin >> choose;
                if (choose != 1 && choose != 2 && choose != 3) {
                    std::cout << "Invalid number, try again" << std::endl;
                }
                else if (choose == 1) {
                    system("CLS");
                    std::cout << "Input lenght(1 - 255):";
                    std::cin >> lenght;
                    if (lenght > 255 || lenght < 1) {
                        std::cout << "Invalid number, lenght set '1'";
                        lenght = 1;
                    }
                }
                else if (choose == 2) {
                    system("CLS");
                    std::cout << "Input X (0 - 100):";
                    std::cin >> startPos.X;
                    if (startPos.X > 255 || startPos.X < 1) {
                        std::cout << "Invalid number, X set '0'";
                        startPos.X = 0;
                    }std::cout << "Input Y (0 - 100):";
                    std::cin >> startPos.Y;
                    if (startPos.Y > 255 || startPos.Y < 1) {
                        std::cout << "Invalid number, Y set '0'";
                        startPos.Y = 0;
                    }
                }
                else if (choose == 3) { break; }
            }
        }
        else if (OneLineEditor.Get_choose_pos() == 2 || OneLineEditor.Get_iKey() == KEY_EXIT) {
            system("CLS");
            std::cout << "\n\nClosed!\n\n";
            return 0;
        }
        OneLineEditor.Set_iKey(0);
        //choose = 0, lenght = 1, cursorPos.X = startPos.X = cursorPos.Y = startPos.Y = 0;
    }



    return 0;
}
