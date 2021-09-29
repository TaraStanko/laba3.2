﻿// Lab_03_2.cpp
// < Станько Тарас >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	
	// спосіб 1: розгалуження в скороченій формі
	
	if (x-1 < 0 && b-x != 0)
		F = a*x*x + b;
	if (x-1 > 0 && b+x == 0)
		F = (x - a) / (x);
	else
		F = (x)/(c);
	cout << endl;
	cout << "1) F = " << F << endl;
	
	// спосіб 2: розгалуження в повній формі
	
	
	if (x -1 < 0 && b-x != 0)
		F = a * x * x + b;
	else
		if (x - 1 > 0 && b + x == 0)
			F = (x - a) / (x);
		else
			F = (x) / (c);

	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}