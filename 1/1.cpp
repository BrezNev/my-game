﻿#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int hod(int v, int* a, string* s11, string* s12, string* s13, string* s21, string* s22, string* s23, string* s31, string* s32, string* s33,
	string* A11, string* A12, string* A13, string* A21, string* A22, string* A23, string* A31, string* A32, string* A33)
{
	int p1 = 0;
	int p2 = 0;
	switch (*a)
	{
	case 1:
	{
		switch (v)
		{
		case 1:
		{
			if (*A11 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s11 = "X";
				*A11 = " ";
			}
			break;
		}
		case 2:
		{
			if (*A12 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s12 = "X";
				*A12 = " ";
			}
			break;
		}
		case 3:
		{
			if (*A13 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s13 = "X";
				*A13 = " ";
			}
			break;
		}
		case 4:
		{
			if (*A21 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s21 = "X";
				*A21 = " ";
			}
			break;
		}
		case 5:
		{
			if (*A22 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s22 = "X";
				*A22 = " ";
			}
			break;
		}
		case 6:
		{
			if (*A23 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s23 = "X";
				*A23 = " ";
			}
			break;
		}
		case 7:
		{
			if (*A31 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s31 = "X";
				*A31 = " ";
			}
			break;
		}
		case 8:
		{
			if (*A32 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s32 = "X";
				*A32 = " ";
			}
			break;
		}
		case 9:
		{
			if (*A33 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s33 = "X";
				*A33 = " ";
			}
			break;
		}
		default:
		{
			cout << "Нельзя ходить не на поле!" << endl;
			break;
		}
		}
		if (((*s11 == "X") && (*s12 == "X") && (*s13 == "X")) ||
			((*s21 == "X") && (*s22 == "X") && (*s23 == "X")) ||
			((*s31 == "X") && (*s32 == "X") && (*s33 == "X")) ||
			((*s11 == "X") && (*s21 == "X") && (*s31 == "X")) ||
			((*s12 == "X") && (*s22 == "X") && (*s32 == "X")) ||
			((*s13 == "X") && (*s23 == "X") && (*s33 == "X")) ||
			((*s11 == "X") && (*s22 == "X") && (*s33 == "X")) ||
			((*s13 == "X") && (*s22 == "X") && (*s31 == "X")))
			p1 = 1;
		*a = 2;
		return p1;
		break;
	}
	case 2:
	{
		switch (v)
		{
		case 1:
		{
			if (*A11 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s11 = "O";
				*A11 = " ";
			}
			break;
		}
		case 2:
		{
			if (*A12 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s12 = "O";
				*A12 = " ";
			}
			break;
		}
		case 3:
		{
			if (*A13 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s13 = "O";
				*A13 = " ";
			}
			break;
		}
		case 4:
		{
			if (*A21 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s21 = "O";
				*A21 = " ";
			}
			break;
		}
		case 5:
		{
			if (*A22 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s22 = "O";
				*A22 = " ";
			}
			break;
		}
		case 6:
		{
			if (*A23 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s23 = "O";
				*A23 = " ";
			}
			break;
		}
		case 7:
		{
			if (*A31 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s31 = "O";
				*A31 = " ";
			}
			break;
		}
		case 8:
		{
			if (*A32 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s32 = "O";
				*A32 = " ";
			}
			break;
		}
		case 9:
		{
			if (*A33 == " ")
				cout << endl << "В это поле больше нельзя походить!" << endl << "Штраф! Ход передается сопернику!" << endl << endl;
			else
			{
				*s33 = "O";
				*A33 = " ";
			}
			break;
		}
		default:
		{
			cout << "Нельзя ходить не на поле!" << endl;
			break;
		}
		}
		if (((*s11 == "O") && (*s12 == "O") && (*s13 == "O")) ||
			((*s21 == "O") && (*s22 == "O") && (*s23 == "O")) ||
			((*s31 == "O") && (*s32 == "O") && (*s33 == "O")) ||
			((*s11 == "O") && (*s21 == "O") && (*s31 == "O")) ||
			((*s12 == "O") && (*s22 == "O") && (*s32 == "O")) ||
			((*s13 == "O") && (*s23 == "O") && (*s33 == "O")) ||
			((*s11 == "O") && (*s22 == "O") && (*s33 == "O")) ||
			((*s13 == "O") && (*s22 == "O") && (*s31 == "O")))
			p2 = 2;
		*a = 1;
		return p2;
		break;
	}
	}
}
int inter(string s11, string s12, string s13, string s21, string s22, string s23, string s31, string s32, string s33,
	string A11, string A12, string A13, string A21, string A22, string A23, string A31, string A32, string A33, string imz1, string imz2, int a)
{
	int V;
	if (a == 1)
		cout << "Игрок " << imz1 << ", Ваш ход:" << endl;
	if (a == 2)
		cout << "Игрок " << imz2 << ", Ваш ход:" << endl;
	cout << "-------------" << "           " << "-------------" << endl;
	cout << "| " << s11 << " | " << s12 << " | " << s13 << " | " << "          " << "| " << A11 << " | " << A12 << " | " << A13 << " | " << endl;
	cout << "-------------" << "           " << "-------------" << endl;
	cout << "| " << s21 << " | " << s22 << " | " << s23 << " | " << "          " << "| " << A21 << " | " << A22 << " | " << A23 << " | " << endl;
	cout << "-------------" << "           " << "-------------" << endl;
	cout << "| " << s31 << " | " << s32 << " | " << s33 << " | " << "          " << "| " << A31 << " | " << A32 << " | " << A33 << " | " << endl;
	cout << "-------------" << "           " << "-------------" << endl;
	cout << "Выберете на поле справа номер ячейки, в которую Вы походите -> ";
	cin >> V;
	cout << endl;
	return V;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, V, p = 0, p2 = 0;
	string imz1 = " ";
	string imz2 = " ";
	string s11 = " "; string A11 = "1";
	string s12 = " "; string A12 = "2";
	string s13 = " "; string A13 = "3";
	string s21 = " "; string A21 = "4";
	string s23 = " "; string A31 = "7";
	string s31 = " "; string A32 = "8";
	string A33 = "9"; string A23 = "6";
	string s32 = " "; string s22 = " "; string A22 = "5";  string s33 = " ";

	cout << "Выберете, чем ходит первый игрок:" << endl << "1. Крестик" << endl << "2. Нолик" << endl << "-> ";
	cin >> a;
	if ((a != 1) && (a != 2))
		cout << "Сделайте корректный выбор!" << endl << endl;
	else
	{
		cout << endl;
		cout << "Игрок, выбравший крестики, введите свое имя -> ";
		cin >> imz1;
		cout << endl;
		cout << "Игрок, выбравший нолики, введите свое имя -> ";
		cin >> imz2;
		cout << endl << endl;
		do
		{
			V = inter(s11, s12, s13, s21, s22, s23, s31, s32, s33, A11, A12, A13, A21, A22, A23, A31, A32, A33, imz1, imz2, a);
			p = hod (V, &a, &s11, &s12, &s13, &s21, &s22, &s23, &s31, &s32, &s33, &A11, &A12, &A13, &A21, &A22, &A23, &A31, &A32, &A33);
			if ((!(((s11 == "X") && (s12 == "X") && (s13 == "X")) ||
				((s21 == "X") && (s22 == "X") && (s23 == "X")) ||
				((s31 == "X") && (s32 == "X") && (s33 == "X")) ||
				((s11 == "X") && (s21 == "X") && (s31 == "X")) ||
				((s12 == "X") && (s22 == "X") && (s32 == "X")) ||
				((s13 == "X") && (s23 == "X") && (s33 == "X")) ||
				((s11 == "X") && (s22 == "X") && (s33 == "X")) ||
				((s13 == "X") && (s22 == "X") && (s31 == "X")))) &&
				(!(((s11 == "O") && (s12 == "O") && (s13 == "O")) ||
					((s21 == "O") && (s22 == "O") && (s23 == "O")) ||
					((s31 == "O") && (s32 == "O") && (s33 == "O")) ||
					((s11 == "O") && (s21 == "O") && (s31 == "O")) ||
					((s12 == "O") && (s22 == "O") && (s32 == "O")) ||
					((s13 == "O") && (s23 == "O") && (s33 == "O")) ||
					((s11 == "O") && (s22 == "O") && (s33 == "O")) ||
					((s13 == "O") && (s22 == "O") && (s31 == "O")))) &&
				((A11 == " ") && (A12 == " ") && (A13 == " ") &&
					(A21 == " ") && (A22 == " ") && (A23 == " ") &&
					(A31 == " ") && (A32 == " ") && (A33 == " ")))
				p = 3;
		} while (p == 0);
		cout << "-------------" << "           " << "-------------" << endl;
		cout << "| " << s11 << " | " << s12 << " | " << s13 << " | " << "          " << "| " << A11 << " | " << A12 << " | " << A13 << " | " << endl;
		cout << "-------------" << "           " << "-------------" << endl;
		cout << "| " << s21 << " | " << s22 << " | " << s23 << " | " << "          " << "| " << A21 << " | " << A22 << " | " << A23 << " | " << endl;
		cout << "-------------" << "           " << "-------------" << endl;
		cout << "| " << s31 << " | " << s32 << " | " << s33 << " | " << "          " << "| " << A31 << " | " << A32 << " | " << A33 << " | " << endl;
		cout << "-------------" << "           " << "-------------" << endl;
		if (p == 1)
			cout << endl << "Конец игры!" << endl << "Игрок " << imz1 << " победил" << endl;
		if (p == 2)
			cout << endl << "Конец игры!" << endl << "Игрок " << imz2 << " победил" << endl;
		if (p == 3)
			cout << endl << "Конец игры!" << endl << "РЫБА" << endl;
	}
	system("pause");
	return 1;
}
	
