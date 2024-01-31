#include<iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS_1
#define ROMBUS_2

void main() {
	setlocale(LC_ALL, "");
	
	int n;
	cout << "¬ведите число: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = i; j < n; j++) {
			cout << "* ";
		}cout << endl;
	}
#endif // TRIANGLE_4
#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++) { cout << "  "; }
		for (int j = 0; j <= i; j++) { cout << "* "; }
		cout << endl;
	}
#endif // TRIANGLE_4
#ifdef ROMBUS_1
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}#ifdef ROMBUS_2
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++)cout << " "; cout << "/";
			for (int j = 0; j < 2 * i; j++)cout << " "; cout << "\\";
			cout << endl;
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			if (i % 2 == j % 2)cout << "  "; else cout << char(254);
			//(i % 2 == j % 2) ? cout << "+ ": cout << "- ";
			//cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		int K = 1; 
		for (int a = 1; a <= i; a++)
		{
			cout << K << " ";
			K = K * (i - a) / a;
		}
		cout << endl;
	}*/
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << "*";
		}
		else
		{
			cout << " ";
		}
		for (int j = 2; j <= n; j++)
		{
			if (j % 2 == 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (j % n == 0)
			{
				cout << "\n";
			}
		}
	}
}