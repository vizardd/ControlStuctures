#include<iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "");
    unsigned long a , b ;
    cout << "¬ведите первое число : "; cin >> a;
    cout << "¬ведите второе число: "; cin>> b;
    cout << a << " : " << b << endl;
    a ^= b ^= a ^= b;
    cout << a << " : " << b;
    
}