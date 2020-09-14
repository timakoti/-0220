// дз Семенов михаил уравнение.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a; double b; double c; double D; double x;
	cout << "Equasion type: ax^2+bx+c=0"<< endl;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;
	if (a == 0 and b != 0) {
		x = (-c) / b;
		cout << "x equals: " << x << endl;
	}
	else {
		if (a == 0 and b == 0) {
			if (c == 0) {
				cout << "x equals any number" << endl;
			}
			else {
				cout << "Equasion not possible" << endl;
			}
		}
		else if (b == 0 and a!= 0) {
			if (((-c)/a)<0){
				cout << "Equasion not possible"<<endl;
			}
			else {
				x = sqrt(((-c) / a));
				if (x != 0) {
					cout << "x1 equals: " << x << endl;
					cout << "x2 equals: " << -x << endl;
				}
				else {
					x = 0;
					cout << "x equals: " << x << endl;
				}
			}
		}
		else if (a == 0 and c == 0) {
			x = 0;
			cout << "x equals: " << x << endl;
		}
		D = (b*b) - (4 * a*c);
		if (D > 0) {
			x = ((-b) + sqrt(D)) / (2 * a);
			cout << "x1 equals: " << x << endl;
			x = ((-b) - sqrt(D)) / (2 * a);
			cout << "x2 equals: " << x << endl;
			return 0;
		}
		if (D == 0) {
			x = (-b) / (2 * a);
			cout << "x equals: " << x << endl;
		}
		if (D < 0) {
			cout << "Equasion not possible" << endl;
		}
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
