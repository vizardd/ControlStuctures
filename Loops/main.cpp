#include<iostream>
#include<conio.h>
using namespace std;

///#define WHILE_1
//#define WHILE_2
//#define FACTORIAL
//#define STEPEN
#define ASCII
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "Ввыъедите количесто итераций: "; cin >> n;
	while (i < n) {
		cout << " Helo Word ";
		cout << "Сам привет ";
		cout << ++i << endl;
		//++i;
	}
#endif // WHILE_1
/*#ifndef WHILE_2
	char key;
	do {
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // WHILE_2*/
#ifdef FACTORIAL
	int i=1, n;
	double factarial = 1;
	cout << "Вычесляе факториал числа" << endl;
	cout << "Введите число: "; cin >> n; cout << endl;
	while (i <= n)
	{
		cout << i << "!= ";
		factarial *= i++;
		cout << factarial << "\n";
	}
#endif // FACTORIAL
#ifdef STEPEN
	double cheslo;
	double stepen;
	double STep = 1;
	cout << "Введите число: "; cin >> cheslo; cout << endl;
	cout << "Введите степень: "; cin >> stepen; cout << endl;
	if (stepen < 0) {
		cheslo = 1 / cheslo;
		stepen = -stepen;
	}
	int i = 0;
	while (i++ < stepen)STep *= cheslo;
	cout << STep << endl;
#endif // STEPEN
	int i = 0;
	int n = 256;
	while (i<n)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
	}
	cout << "Вот и скозочке конец" << endl;
}