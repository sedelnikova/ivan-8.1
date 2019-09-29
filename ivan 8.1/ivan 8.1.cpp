// ivan 8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 1. Даны две переменные целого типа : A и B.Если их значения не равны, то присвоить каждой переменной большее из этих значений, 
// а если равны, то присвоить переменным нулевые значения.Вывести новые значения переменных A и B.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите, пожалуйста, 2 числа: ";
	cin >> A >> B;
	if (A != B)
	{
		int max = A;
		if (B > max)
		{
			max = B;
		}

		cout << "A = " << max << endl;
		cout << "B = " << max << endl;
	}
	else
	{
		A = 0;
		B = 0;

		cout << "A = " << A << endl;
		cout << "B = " << B << endl;
	}
	
	return 0;
	}