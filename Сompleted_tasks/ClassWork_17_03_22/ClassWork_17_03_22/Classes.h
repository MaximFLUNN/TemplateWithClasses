#pragma once
#include <iostream>
#include <cmath>

enum Type { bySides, byBaseAndHeight, byPointsCoords };

class MyMenu
{
private:

public:
	MyMenu() {
		back_flag = 0;
		exit_flag = 0;
		user_choosen = 0;
		_inputType = bySides;
	};

	~MyMenu(){};

	Type _inputType;
	int user_choosen = 0;
	bool exit_flag = false, back_flag = false;

	int MenuUserChoosenInput(int& user_choosen) {
		std::cout << "Ways to define a triangle:" << std::endl
			<< "1) by three sides," << std::endl
			<< "2) by base and height," << std::endl
			<< "3) by three points" << std::endl
			<< "Input: ";
		std::cin >> user_choosen;
		return user_choosen;
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

	void PrintParam(bool exit_flag, bool back_flag, Type& _inputType, int AB, int BC, int AC, int h, int* A, int* B, int* C) {
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
};

class Point
{
private:

public:
	Point() {
		*A = *B = *C = {0};
	};

	Point(int* _A, int* _B, int* _C) {
		*A = *_A;
		*B = *_B;
		*C = *_C;
	}

	~Point(){};

	int* GetA() { return A; }
	int* GetB() { return B; }
	int* GetC() { return C; }
	int A[2], B[2], C[2];
};

class Sides
{
private:

public:
	Sides() {
		AB = BC = AC = 0;
	};

	Sides(int _AB, int _BC, int _AC) {
		AB = _AB;
		BC = _BC;
		AC = _AC;
	}

	~Sides(){};

	int GetAB() { return AB; }
	int GetBC() { return BC; }
	int GetAC() { return AC; }

	int AB, BC, AC;
};

class BaseAndHeight
{
public:
	BaseAndHeight() {
		h = { 0 };
	};

	~BaseAndHeight(){};

	int GetH() { return h; }
	int h;
};

class Triangle
{
private:

public:
	Triangle() {
		p = 0;
		S = 0;
	};

	Triangle(int AB, int BC, int AC) {
		side = Sides(AB, BC, AC);
	};

	Triangle(int h) {
		bh.h = h;
	}

	Triangle(int* A, int* B, int* C) {
		point = Point(A, B, C);
	}

	~Triangle(){};

	float GetP() { return p; }
	float GetS() { return S; }
	float p, S;

	Point point;
	Sides side;
	BaseAndHeight bh;

	void InputTriangle(int& user_choosen, Type _inputType, int& AB, int& BC, int& AC, int& h, int* A, int* B, int* C) {
		switch (user_choosen) {
		case 1:
			MenuInputBySides(_inputType, AB, BC, AC);
			break;
		case 2:
			MenuInputByBaseAndHeight(_inputType, AB, h);
			break;
		case 3:
			MenuInputByPointsCoords(_inputType, A, B, C);
			break;
		default:
			std::cout << "Input error: error in input" << std::endl;
		}
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
			*this = Triangle (AB, BC, AC);
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

	void MenuInputByPointsCoords(Type& _inputType, int* A, int* B, int* C) {
		_inputType = byPointsCoords;
		std::cout << "Input 1st point's coordinates (between space): ";
		std::cin >> A[0] >> A[1];
		std::cout << "Input 2nd point's coordinates (between space): ";
		std::cin >> B[0] >> B[1];
		std::cout << "Input 3rd point's coordinates (between space): ";
		std::cin >> C[0] >> C[1];
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

	void AnalyseTwoTriangleSquare(Triangle second, Type _inputType) {
		CalculatingSquare(_inputType, side.AB, side.BC, side.AC, bh.h, point.A, point.B, point.C, p, S);
		second.CalculatingSquare(_inputType, second.side.AB, second.side.BC, second.side.AC, second.bh.h, second.point.A, second.point.B, second.point.C, second.p, second.S);
		if (S == second.S) { std::cout << "The square of the triangles are square" << std::endl; }
		else { std::cout << "Triangles square not square" << std::endl; }
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

};
