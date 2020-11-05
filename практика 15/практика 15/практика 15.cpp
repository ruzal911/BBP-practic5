#include <iostream>
#include <math.h>
using namespace std;

int PowerA3(double &A, double &B)
{
	B = A*A*A;
	return B;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double A, B;

	cout << "\t\t\t\t_________Первое задание_________" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите A:" << endl;
		cin >> A;
		PowerA3(A, B);
		cout << "Результат равен: " << B<<"\n\n";
	}


	return 0;
}