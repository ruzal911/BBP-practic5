#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout<<"\t\t\t\t\t_________Первое задание_________"<<endl;
	int x1, x2, y1, y2,x3,y3;
	float c,d1,d2;
	cout << "Введите первую координату точки через пробел:" << endl;
	cin >> x1>> y1;
	cout << "Введите вторую координату точки через пробел:" << endl;
	cin >> x2>> y2;
	c = sqrt(abs((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
	cout << "Расстояние между двумя заданными вами точками равно:"<< c << endl;


	cout << "\t\t\t\t\t_________второе задание_________" << endl;
	cout << "Введите  координату точки A через пробел:" << endl;
	cin >> x1 >> y1;
	cout << "Введите  координату точки B через пробел:" << endl;
	cin >> x2 >> y2;
	cout << "Введите  координату C точки через пробел:" << endl;
	cin >> x3 >> y3;
	d1= sqrt(abs((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)));
	d2= sqrt(abs((x2- x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)));
	c = d1 + d2;
	cout << "Длина отрезка AC равна: " << d1 << ". Длина отрезка BC равна: " << d2 << endl;
	cout << "Сумма длинн отрезков AC и BС равна: " << c << endl;



	cout << "\t\t\t\t\t_________третье задание_________" << endl;

	return 0;
}