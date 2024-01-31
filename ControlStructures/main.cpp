#include<iostream>
using namespace std;
//#define CAL1;
//#define CAL2;
//#define GRADUSNIK;
//#define KANCULYATOR
void main()
{

	setlocale(LC_ALL, "");
	cout << "Hello controls" << endl;
# if defined GRADUSNIK
	double temperature;
	
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "вы на другой планете " << endl;
	}
	else if (temperature == 1 or temperature == 21 or temperature == 31 or temperature == 41 or temperature == 51 or temperature == 61 or temperature == 71 or temperature == 81 or temperature == 91 or temperature == -1 or temperature == -21 or temperature == -31 or temperature == - 41 or temperature == -51 or temperature == -61 or temperature == -71 or temperature == -81 or temperature == -91) {
		cout << "темперанура " << temperature << " Градус" << endl;
	}
	else if (temperature == 2 or temperature == 3 or temperature == 4 or temperature == 22 or temperature == 23 or temperature == 24 or temperature == 32 or temperature == 33 or temperature == 34 or temperature == 42 or temperature == 43 or temperature == 44 or temperature == 52 or temperature == 53 or temperature == 54 or temperature == 62 or temperature == 63 or temperature == 64 or temperature == 72 or temperature == 73 or temperature == 74 or temperature == 82 or temperature == 83 or temperature == 84 or temperature == 92 or temperature == 93 or temperature == 94 or temperature == -2 or temperature == -3 or temperature == -4 or temperature == -22 or temperature == -23 or temperature == -24 or temperature == -32 or temperature == -33 or temperature == -34 or temperature == -42 or temperature == -43 or temperature == -44 or temperature == -52 or temperature == -53 or temperature == -54 or temperature == -62 or temperature == -63 or temperature == -64 or temperature == -72 or temperature == -73 or temperature == -74 or temperature == -82 or temperature == -83 or temperature == -84 or temperature == -92 or temperature == -93 or temperature == -94) {
		cout << "темперанура " << temperature << " Градуса" << endl;
	}
	else if (temperature == 5 or temperature == 6 or temperature == 7 or temperature == 8 or temperature == 9 or temperature == 10 or temperature == 11 or temperature == 12 or temperature == 13 or temperature == 14 or temperature == 15 or temperature == 16 or temperature == 17 or temperature == 18 or temperature == 19 or temperature == 20 or temperature == 25 or temperature == 26 or temperature == 27 or temperature == 28 or temperature == 29 or temperature == 30 or temperature == 35 or temperature == 36 or temperature == 37 or temperature == 38 or temperature == 39 or temperature == 40 or temperature == 45 or temperature == 46 or temperature == 47 or temperature == 48 or temperature == 49 or temperature == 50 or temperature == 55 or temperature == 56 or temperature == 57 or temperature == 58 or temperature == 59 or temperature == 60 or temperature == 65 or temperature == 66 or temperature == 67 or temperature == 68 or temperature == 69 or temperature == 70 or temperature == 75 or temperature == 76 or temperature == 78 or temperature == 79 or temperature == 80 or temperature == 85 or temperature == 86 or temperature == 87 or temperature == 88 or temperature == 89 or temperature == 90 or temperature == 95 or temperature == 96 or temperature == 97 or temperature == 98 or temperature == 99 or temperature == 100) {
		cout << "темперанура " << temperature << " Градусов" << endl;
	}
	else if (temperature ==-5 or temperature == -6 or temperature == -7 or temperature == -8 or temperature == -9 or temperature == -10 or temperature == -11 or temperature == -12 or temperature == -13 or temperature == -14 or temperature == -15 or temperature == -16 or temperature == -17 or temperature == -18 or temperature == -19 or temperature == -20 or temperature == -25 or temperature == -26 or temperature == -27 or temperature == -28 or temperature == -29 or temperature == -30 or temperature == -35 or temperature == -36 or temperature == -37 or temperature == -38 or temperature == -39 or temperature == -40 or temperature == -45 or temperature == -46 or temperature == -47 or temperature == -48 or temperature == -49 or temperature == -50 or temperature == -55 or temperature == -56 or temperature == -57 or temperature == -58 or temperature == -59 or temperature == -60 or temperature == -65 or temperature == -66 or temperature == -67 or temperature == -68 or temperature == -69 or temperature == -70 or temperature == -75 or temperature == -76 or temperature == -78 or temperature == -79 or temperature == -80 or temperature == -85 or temperature == -86 or temperature == -87 or temperature == -88 or temperature == -89 or temperature == -90 or temperature == -95 or temperature == -96 or temperature == -97 or temperature == -98 or temperature == -99 or temperature == 100) {
		cout << "темперанура " << temperature << " Градусов" << endl;
	}
#endif

# if defined KANCULYATOR
	double chislo1, chislo2;
	char deystvie;
	cout << "приветствуем вас в нашем калькуляторе" << endl;
	cout << "Ведите первое число: "; cin >> chislo1;
	cout << "Ведите второе число: "; cin >> chislo2;
	cout << "Ведите одно из следующих дейтвий (+,-,*,/): "; cin >> deystvie;
	if (deystvie == '+') {
		cout << chislo1 << deystvie << chislo2 << "=" << chislo1 + chislo2 << endl;
	}
	else if(deystvie == '-') {
		cout << chislo1 << deystvie << chislo2 << "=" << chislo1 - chislo2 << endl;
	}
	else if (deystvie == '*') {
		cout << chislo1 << deystvie << chislo2 << "=" << chislo1 * chislo2 << endl;
	}
	else if (deystvie == '/') {
		if (chislo2 == 0) {
			cout << "На ноль делить нельзя!";
		}
		else if(chislo2!=0){
		cout << chislo1 << deystvie << chislo2 << "=" << chislo1 / chislo2 << endl;
		}
	}
#endif

# if defined CAL1
	double a, b;
	char s;
	cout << "Введите выражения: ";
	cin >> a >> s >> b;
	cout << a << s <<b<< endl;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
#endif

	double a, b;
	char s;
	cout << "Введите выражения: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
	default:cout << "Error: no operation" << endl;
	}

}