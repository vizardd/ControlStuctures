#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;			//это чило виденое с клавиатуры
	int revers = 0;		//исходное чесло записаное в абратном порядке (цифры задом аперед)
	cout << "Введите число: "; cin >> number;
	int buffer = number;//копируем введеное число чтобы даные веденые пользователем остались неизмеными
	while (buffer)
	{
		revers *= 10;
		revers += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << revers << endl;
	if (revers == number) {
		cout << "Полиндром" << endl;
	}
	else {
		cout << "May be the nex tine" << endl;
	}
}