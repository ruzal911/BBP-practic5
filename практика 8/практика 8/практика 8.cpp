#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int size1, size2,size3,k,l,a;
	cout << "\t\t\t\t__________Первое задание__________" << endl;
	cout << "Введите размера файла в байтах" << endl;
	cin >> size1;
	size2 = size1 / 1024;
	cout << "Размер вашего файла в полных Кбайтах равен " <<size2<<endl;
	


	cout << "\t\t\t\t__________Второе задание__________" << endl;
	cout << "Введите длину отрезка А" << endl;
	cin >> size1;
	cout << "Введите длину отрезка В" << endl;
	cin >> size2;
	k = size1 / size2;
	cout << "Количество отрезков B, размещенных на отрезке A равно " <<k<< endl;
	


	cout << "\t\t\t\t__________Третье задание__________" << endl;
	cout << "Введите длину отрезка А" << endl;
	cin >> size1;
	cout << "Введите длину отрезка В" << endl;
	cin >> size2;
	k = size1 / size2;
	l = size1 - (k * size2);
	cout << "Длина незанятой части отрезка A равна " << l << endl;
	



	cout << "\t\t\t\t__________Четвертое задание__________" << endl;
	cout << "Введите двухзначное число" << endl;
	cin >> a;
	l = 0;
	while (a>0)
	{
		k = a % 10;
		l = l * 10 + k;
		a /= 10; 
	}
	cout << "Перевернутое число равно: " << l << endl;
	


	cout << "\t\t\t\t__________Пятое задание__________" << endl;
	cout << "Введите трехзначное число" << endl;
	cin >> a;
	l = a / 100;
	a = a % 100;
	a=a*10+l;
	cout << "Полученное число равно " << a << endl;
	return 0;
}
