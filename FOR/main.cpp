#include<iostream>
using namespace std;
//#define FAKTORIAL
//#define STEPEN
//#define ASCII
//#define FIBANACHI
//#define FIBANACHI_2
//#define YMNOCHENIE
//#define PIFAGOR
//#define PROST
void main() {
	setlocale(LC_ALL, "");
#ifdef FAKTORIAL
	int i = 1, n;
	double factarial = 1;
	cout << "Вычесляе факториал числа" << endl;
	cout << "Введите число: "; cin >> n;
	for (i; i <= n; i++)
	{
		cout << i << "! = ";
		factarial *= i;
		cout << factarial << "\n";
	}
#endif // 
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
	for (i; i < stepen; i++) {
		STep *= cheslo;
		cout << STep << endl;
	}
#endif // STEPEN
#ifdef ASCII
	int i = 0;
	int n = 256;
	setlocale(LC_ALL, "C");
	for (i; i < n; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " " << endl;
	}
	setlocale(LC_ALL, "");
	cout << "Вот и скозочке конец" << endl;
#endif // ASCII
#ifdef FIBANACHI
	double chs1 = 0;
	double chs2 = 1;
	int n;
	int nex;
	cout << "Введите предельное число: "; cin >> n; cout << endl;
	for (int i = 0; i < n; i++)
	{

		nex = chs1 + chs2;
		chs1 = chs2;
		chs2 = nex;
		cout << nex << ", ";
	}
#endif // FIBANACHI
#ifdef FIBANACHI_2
	double chs1 = 0;
	double chs2 = 1;
	int n;
	int nex;
	cout << "Введите предельное число: "; cin >> n; cout << endl;
	for (chs1; chs1 < n; chs1++)
	{
		cout << chs1 << ", ";
		nex = chs1 + chs2;
		chs1 = chs2;
		chs2 = nex;
	}
#endif // FIBANACHI_2
#ifdef PROST
	int n;
	cout << "ведите предел"; cin >> n;
	for (int i = 0; i < n; i++) {
		bool simple = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif // PROST
#ifdef YMNOCHENIE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
#endif // YMN
#ifdef PIFAGOR
	for (int i = 0; i <= 10; i++)
		cout << i << '\t';
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << '\t';
		for (int j = 1; j <= 10; j++)
			cout << i * j << '\t';
		cout << endl;
	}
}
#endif // PIFAGOR
}