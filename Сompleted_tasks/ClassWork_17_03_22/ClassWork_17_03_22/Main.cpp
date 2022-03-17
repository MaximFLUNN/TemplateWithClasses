﻿#include <iostream>
#include <cmath>

/* Задание: дописать пропущенные методы, выделить функции, классы,
заменить часть функций перегрузкой операторов.

ЦЕЛЬ: main() должен стать хорошо читаемой структрутой, чтобы было понятно, что происходит во всей программе (без комментариев),
но при этом помещался бы на одном экране.

! В main() вносить свои изменения структуры программы запрещено. Только заменять действия на аналоги, реализованные в
функциях или с использованием классов. СТРУКТУРА ДОЛЖНА ОСТАТЬСЯ ИСХОДНОЙ.

На гитхабе должно появиться 4 коммита:
0. дописал методы
1. выделил функции
2. выделил классы и применил принципы ООП
3. заменил часть функций операторами

То есть по окончании каждого этапа делайте коммит.

Подсказки:
0. Возможные классы, которые проглядыываются в программе:
- класс МЕНЮ (объединяет функции, относящиеся к меню взаимодействия с пользователем),
- класс ТОЧКА (для хранения координат)
- класс ТРЕУГОЛЬНИК (в конструкторах должны отображаться все способы задания треугольника).

1. Функции:
- различные функции меню (показать меню 1 уровня, показать меню 2 уровня и т.д.),
- функции ввода и проверки корректности данных,
- функции различных действий над треугольником: проверка на существование, подсчёт площади и т.д.

Указание. На этапе создания классов предполагается, что объект класса создаётся не в данной функции, а после неё.
Не лепите ввод данных и конструктор в один метод. Функции ввода данных - функции МЕНЮ, а создание объекта (точки, например) -
функции соответствующего класса.

Пример допустимой реализации:
Через 3 метода:
1) метод ввода значений (метод класса меню) - inputSides
2) метод ввода треугльника (метод класса треугольник) -inputTriangle

Далее используется перечисление - enum Type {bySides, byBaseAndHeight, byPointsCoords};

Triange tr1;
tr1.inputTriangle(bySides);

void inputTriangle(Type _type) {
  switch (_type) {
   case bySides:
     int side1, side2, side3;
     inputSides(&side1, &side2, &side3);   // тут сидит ввод значений
     Triange temp(side1, side2, side3);    // тут создаётся треугольник с указанными полями
     this = temp;
     break;
   // ...
  }
}

или

void inputTriangle(Type _type) {
  switch (_type) {
   case bySides:
     int side1, side2, side3;
     inputSides(&side1, &side2, &side3);   // тут сидит ввод значений
     this->side1 = side1;                  // тут изменяется уже существующий треугольник, заполнение указанными полями
     this->side2 = side2;
     this->side3 = side3;
     break;
   // ...
  }
}

*/

enum Type { bySides, byBaseAndHeight, byPointsCoords };

int MenuUserChoosenInput(int& user_choosen) {
    std::cout << "Ways to define a triangle:" << std::endl
        << "1) by three sides," << std::endl
        << "2) by base and height," << std::endl
        << "3) by three points" << std::endl
        << "Input: ";
    std::cin >> user_choosen;
    return user_choosen;
}

void MenuInputBySides(Type& _inputType, int& AB, int& BC, int& AC) {
    _inputType = bySides;
    while (1) {
        std::cout << "Input 3 side of triangle (between space): ";
        std::cin >> AB >> BC >> AC;
        if (!(AB + BC > AC && AB + AC > BC && AC + BC > AB)) {
            std::cout << "Input error: triangle dont exist" << std::endl;
            std::cout << "Try again" << std::endl;
            continue;
        }
        break;
    }
}

void MenuInputByBaseAndHeight(Type& _inputType, int& AB, int& h) {
    _inputType = byBaseAndHeight;
    std::cout << "Input base of triangle: ";
    std::cin >> AB;
    std::cout << "Input height of triangle: ";
    std::cin >> h;
}

void MenuInputByBaseAndHeight(Type& _inputType, int* A, int* B, int* C) {
    _inputType = byPointsCoords;
    std::cout << "Input 1st point's coordinates (between space): ";
    std::cin >> A[0] >> A[1];
    std::cout << "Input 2nd point's coordinates (between space): ";
    std::cin >> B[0] >> B[1];
    std::cout << "Input 3rd point's coordinates (between space): ";
    std::cin >> C[0] >> C[1];
}

void MenuChooseMethods(int& user_choosen) {
    std::cout << "Methods: 1) get square," << std::endl
        << "2) get perimeter, " << std::endl
        << "3) get type of triangle," << std::endl
        << "4) compare with another triangle by square," << std::endl
        << "5) back to first menu," << std::endl
        << "0) exit," << std::endl
        << "Input: ";
    std::cin >> user_choosen;
}

void CalculationSqureBySides(Type& _inputType, int& AB, int& BC, int& AC, float& p, float& S) {
    if (_inputType == bySides) {
        if (AB + BC > AC && AB + AC > BC && AC + BC > AB) {
            p = (AB + BC + AC) * 0.5;
            S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
            std::cout << "Square of triangle: S = " << S << std::endl;
        }
        else {
            std::cout << "Input error: triangle dont exist" << std::endl;
        }
    }
}

void CalculationSqureByBaseAndHeight(Type& _inputType, int& AB, int& BC, int& AC, float& S, int& h) {
    if (_inputType == byBaseAndHeight) {
        if (AB > AC && AB > BC && h != 0)
            S = 0.5 * AB * h;
        else if (AC > AB && AC > BC && h != 0)
            S = 0.5 * AC * h;
        else if (BC > AC && BC > AB && h != 0)
            S = 0.5 * BC * h;
        else {
            std::cout << "Input error: triangle dont exist" << std::endl;
        }
    }
}

void CalculationSqureByPointsCoords(Type& _inputType, int* A, int* B, int* C, float& S) {
    if (_inputType == byPointsCoords) {
        S = abs(0.5 * ((A[0] - C[0]) * (B[1] - C[1]) - (A[1] - C[1]) * (B[0] - C[0])));
    }
}

void CalculationPerimetrBySides(Type& _inputType, float& p, int& AB, int& BC, int& AC) { 
    if (_inputType == bySides) { p = AB + BC + AC; } 
}

void CalculationPerimetrByBaseAndHeight(Type& _inputType) {
    if (_inputType == byBaseAndHeight) { std::cout << "Input error: we couldn't find perimeter by your parameters" << std::endl; }
}

void CalculationPerimetrByPointsCoords(Type& _inputType, int* A, int* B, int* C, float& p) {
    if (_inputType == byPointsCoords) {
        p = sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) + sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) + sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2));
    }
}

void ComparisonBySides(Type& _inputType, int& AB, int& BC, int& AC) {
    if (_inputType == bySides) {
        if (AB == BC && AB == AC) { std::cout << "Type triangle: equilateral" << std::endl; }
        else if (AB == BC || AB == AC || AC == BC) { std::cout << "Type triangle: isosceles" << std::endl; }
        else if (AB > BC && AB > AC) { if (pow(AB, 2) == pow(BC, 2) + pow(AC, 2)) { std::cout << "Type triangle: right triangle" << std::endl; } }
        else if (BC > AB && BC > AC) { if (pow(BC, 2) == pow(AB, 2) + pow(AC, 2)) { std::cout << "Type triangle: right triangle" << std::endl; } }
        else if (AC > BC && AC > AB) { if (pow(AC, 2) == pow(BC, 2) + pow(AB, 2)) { std::cout << "Type triangle: right triangle" << std::endl; } }
        else { std::cout << "Type triangle: scalene" << std::endl; }
    }
}

void ComparisonByBaseAndHeight(Type& _inputType) {
    if (_inputType == byBaseAndHeight) { std::cout << "Type triangle: cannot be determined from the original data!" << std::endl; }
}

void ComparisonByBaseAndHeight(Type& _inputType, int* A, int* B, int* C) {
    if (_inputType == byPointsCoords) {
        if (sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) ==
            sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) &&
            sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) ==
            sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)))
        {
            std::cout << "Type triangle: equilateral" << std::endl;
        }
        else if (sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) ==
            sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) ||
            sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) ==
            sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)) ||
            sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)) ==
            sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)))
        {
            std::cout << "Type triangle: isosceles" << std::endl;
        }
        else if (sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) >
            sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) &&
            sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) >
            sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)))
        {
            if (pow(sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)), 2) ==
                pow(sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)), 2) +
                pow(sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)), 2))
            {
                std::cout << "Type triangle: right triangle" << std::endl;
            }
        }
        else if (sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) >
            sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)) &&
            sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) >
            sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)))
        {
            if (pow(sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)), 2) ==
                pow(sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)), 2) +
                pow(sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)), 2))
            {
                std::cout << "Type triangle: right triangle" << std::endl;
            }
        }
        else if (sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)) >
            sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)) &&
            sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)) >
            sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)))
        {
            if (pow(sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2)), 2) ==
                pow(sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2)), 2) +
                pow(sqrt(pow((B[0] - A[0]), 2) + pow((B[1] - A[1]), 2)), 2))
            {
                std::cout << "Type triangle: right triangle" << std::endl;
            }
        }
        else { std::cout << "Type triangle: scalene" << std::endl; }
    }
}

void AnalyseTwoTriangleSquare(float& S, float& S_second) {
    if (S == S_second) { std::cout << "The square of the triangles are square" << std::endl; }
    else { std::cout << "Triangles square not square" << std::endl; }
}

void LastParam(bool exit_flag, bool back_flag, Type& _inputType, int AB, int BC, int AC, int h, int* A, int* B, int* C) {
    if (back_flag || exit_flag) {
        system("cls");
        std::cout << "Last parameters: ";
        if (_inputType == bySides) {
            std::cout << AB << "x" << BC << "x" << AC << std::endl;
        }
        else if (_inputType == byBaseAndHeight) {
            std::cout << "a = " << AB << ", h = " << h << std::endl;
        }
        else if (_inputType == byPointsCoords) {
            std::cout << "(" << A[0] << ", " << A[1] << ")" << ", ";
            std::cout << "(" << B[0] << ", " << B[1] << ")" << ", ";
            std::cout << "(" << C[0] << ", " << C[1] << ")" << std::endl;
        }
    }
}

void InputTriangle(int& user_choosen, Type _inputType, int& AB, int& BC, int& AC, int& h, int* A, int* B, int* C) {
    switch (user_choosen) {
    case 1:
        MenuInputBySides(_inputType, AB, BC, AC);
        break;
    case 2:
        MenuInputByBaseAndHeight(_inputType, AB, h);
        break;
    case 3:
        MenuInputByBaseAndHeight(_inputType, A, B, C);
        break;
    default:
        std::cout << "Input error: error in input" << std::endl;
    }
}

void CalculatingSquare(Type _inputType, int& AB, int& BC, int& AC, int& h, int* A, int* B, int* C, float& p, float& S) {
    CalculationSqureBySides(_inputType, AB, BC, AC, p, S);
    CalculationSqureByBaseAndHeight(_inputType, AB, BC, AC, S, h);
    CalculationSqureByPointsCoords(_inputType, A, B, C, S);
    system("pause");
    system("cls");
}

void CalculatingPerimetr(Type _inputType, int& AB, int& BC, int& AC, int& h, int* A, int* B, int* C, float& p) {
    CalculationPerimetrBySides(_inputType, p, AB, BC, AC);
    CalculationPerimetrByBaseAndHeight(_inputType);
    CalculationPerimetrByPointsCoords(_inputType, A, B, A, p);
    system("pause");
    system("cls");
}

void Comparison(Type _inputType, int& AB, int& BC, int& AC, int& h, int* A, int* B, int* C) {
    ComparisonBySides(_inputType, AB, BC, AC);
    ComparisonByBaseAndHeight(_inputType);
    ComparisonByBaseAndHeight(_inputType, A, B, C);
    system("pause");
    system("cls");
}

int main() {
    int user_choosen = 0, AB, BC, AC, h;
    int A[2], B[2], C[2];
    float p, S, S_second = 0;
    bool exit_flag = false, back_flag;
    Type _inputType = bySides;
    while (!exit_flag) {
        back_flag = false;
        MenuUserChoosenInput(user_choosen);
        InputTriangle(user_choosen, _inputType, AB, BC, AC, h, A, B, C);
        while (!back_flag) {
            MenuChooseMethods(user_choosen);
            switch (user_choosen) {
            case 0:
                exit_flag = true;
                break;
            case 1:
                CalculatingSquare(_inputType, AB, BC, AC, h, A, B, C, p, S);
                break;
            case 2:
                CalculatingPerimetr(_inputType, AB, BC, AC, h, A, B, C, p);
                break;
            case 3:
                Comparison(_inputType, AB, BC, AC, h, A, B, C);
                break;
            case 4:
                AnalyseTwoTriangleSquare(S, S_second);
                break;
            case 5:
                back_flag = true;
                break;
            default:
                std::cout << "Input error: error in input" << std::endl;
            }
            LastParam(exit_flag, back_flag, _inputType, AB, BC, AC, h, A, B, C);
            break;
        }
    }
    system("cls");
    std::cout << "Goodbay!" << std::endl;
}