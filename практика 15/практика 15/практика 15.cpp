#include <iostream>
#include <math.h>
using namespace std;

int PowerA3(double &A, double &B)
{
	B = A*A*A;
	return B;
}
int Sign(double &X)
{
	if (X < 0)
		X = -1;
	if (X = 0)
		X = 0;
	if (X >0)
		X = 1;
	return X;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double A, B,S;
	/*
	cout << "\t\t\t\t_________Первое задание_________" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите A:" << endl;
		cin >> A;
		PowerA3(A, B);
		cout << "Результат равен: " << B<<"\n\n";
	}
	*/

	cout<<"\t\t\t\t_________Второе задание_________" << endl;
	cout << "Введите A:" << endl;
	cin >> A;
	cout << "Введите B:" << endl;
	cin >> B;
	A = Sign(A);
	B=Sign(B);
	S = A + B;
	cout << "Значение выражения равно:" <<S<< endl;

	return 0;
}