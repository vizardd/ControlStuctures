#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	double a, b; // ����� ������� � ����������
	char s;      // s Sign(���� ��������)
	cout << "������� ���������: ";
	cin >> a >> s >> b;
//	cout << a << s << b << endl;
	switch (s) {
	case '+':cout << a << " " << s << " " << b << " = " <<a+b<< endl; break;
	case '-':cout << a << " " << s << " " << b << " = " <<a-b<< endl; break;
	case '*':cout << a << " " << s << " " << b << " = " <<a*b<< endl; break;
	case '/':cout << a << " " << s << " " << b << " = " <<a/b<< endl; break;
	default: cout << "Error: No operation" << endl;
	}
	main();
}