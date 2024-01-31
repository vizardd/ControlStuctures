#include<iostream>
#include<conio.h>
using namespace std;
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define Enter 13
#define Escape 27
void main() {
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прижок" << endl;
		else if (key == 13)cout << "Огонь" << endl;
		else if (key != 27 && key != -32)cout << "Error" << endl;*/
		switch (key)
		{
		case 'W':case 'w':case UP_ARROW:	cout << "Вперед" << endl; break;
		case 'S':case 's':case DOWN_ARROW:	cout << "назад"  << endl; break;
		case 'a':case 'A':case LEFT_ARROW:	cout << "Влево"	 << endl; break;
		case 'D':case 'd':case RIGHT_ARROW:	cout << "Впоаво" << endl; break;
		case ' ':	cout << "Прыжок"<<	endl;break;
		case Enter:	cout << "Огонь" <<	endl;break;
		case Escape:cout << "Выход" <<	endl;
		case -32:break;
		default:	cout << "Error" <<	endl;
		}
	} while (key != 27);
}