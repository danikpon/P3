#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	double c, d, sum, min, mnoj, del;
		cout << "\n Пара переменных int-int \n";
	cout << "Введте первое число: \n";
		cin >> a;
	cout << "Введте второе число: \n";
		cin >> b;
	sum = a + b;
	min = a - b;
	mnoj = a * b;
	del = a / b;
	cout << "\nСумма = " << sum << "\n";
	cout << "Вычитание = " << min << "\n";
	cout << "Умножение = " << mnoj << "\n";
	cout << "Деление = " << del << "\n";

	c = a;
	d = b;

		cout << "\n Пара переменных double-double \n";
	sum = c + d;
	min = c - d;
	mnoj = c * d;
	del = c / d;
	cout << "Сумма = " << sum << "\n";
	cout << "Вычитание = " << min << "\n";
	cout << "Умножение = " << mnoj << "\n";
	cout << "Деление = " << del << "\n";

		cout << "\n Пара переменных int-double \n";
	sum = a + d;
	min = a - d;
	mnoj = a * d;
	del = a / d;
	cout << "Сумма = " << sum << "\n";
	cout << "Вычитание = " << min << "\n";
	cout << "Умножение = " << mnoj << "\n";
	cout << "Деление = " << del << "\n";

		cout << "\n Пара переменных double-int \n";
	sum = d + a;
	min = d - a;
	mnoj = d * a;
	del = d / a;
	cout << "Сумма = " << sum << "\n";
	cout << "Вычитание = " << min << "\n";
	cout << "Умножение = " << mnoj << "\n";
	cout << "Деление = " << del << "\n";

	return 0;
}