#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "");
	int n1, n2, n3, n4, n5, n6;  // ����� ������
	cout << "�����������! ������� �������� ��� ����� ������� �� ��!" << endl;
	cout << "������� ����� ������ �� ����� ����  ������ ����� ������: "; cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
	int sum1, sum2;
	sum1 = n1 + n2 + n3;
	sum2 = n4 + n5 + n6;
	if (sum1 == sum2) {
		cout << "����������� ��� ����� ���������!!!" << endl;;
	}
	else {
		cout << "��� �� �������" << endl;
	}
}