#include<iostream>
using namespace std;
#define UPPER_LEFT_ANGLE                (char)218
#define UPPER_RIGT_ANGLE				(char)191
#define LOWER_LEFT_ANGLE				(char)192
#define LOWER_RIGT_ANGLE				(char)217
#define HORIZONTAL_LINE					(char)196<<(char)196
#define VERTICAL_LINE					(char)179
#define WHITE_BOX						"\xDB\xDB"
#define BLACK_BOX						"\x20\x20"

//#define DOSKA_1
//#define DOSKA_2
//#define DOSKA_3
#define HARDKORD
//#define PAASCAL
void main() {
	setlocale(LC_ALL, "");
	int n;
	cout << "ВВедите Число: "; cin >> n;
#ifdef DOSKA_1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}cout << endl;
		}
	}
#endif // DOSKA_1
#ifdef DOSKA_2
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
#endif // DOSKA_2
#ifdef DOSKA_3
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			//else (i % 2 == j % 2) ? cout << WHITE_BOX: cout << "  ";
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // DOSKA_3
#ifdef PAASCAL
	for (int i = 1; i < n; i++)
	{
		cout << " ";
		int K = 1;
		for (int a = 1; a <= i; a++)
		{
			cout << K << " ";
			K = K * (i - a) / a;
		}
		cout << endl;
	}
#endif // PAASCAL

			
}