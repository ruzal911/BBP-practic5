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
	if (X == 0)
		X = 0;
	if (X >0)
		X = 1;
	return X;
}
int Rings(double& R1, double& R2)
{
	double S=abs(3.14*(R1*R1-R2*R2));
	return S;
	
}
int Quarter(double &X, double &Y)
{
	double R;
	if ((X>0)&&(Y>0))
		R = 1;
	if ((X < 0) && (Y > 0))
		R = 2;
	if ((X < 0) && (Y < 0))
		R = 3;
	if ((X > 0) && (Y < 0))
		R = 4;
	return R;
	
}

int Fact2(double& N)
{
	double S=1;
	int n = N;
	if((n%2)!=0)
		for (int i = 1;i<=N; i+=2)
			S = S * i;
	else
		for (int i = 2; i <=N; i += 2)
			S = S * i;
	return S;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double A, B,S,R1,R2,X,Y,N;
	
	cout << "\t\t\t\t_________Первое задание_________" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите A:" << endl;
		cin >> A;
		PowerA3(A, B);
		cout << "Результат равен: " << B<<"\n\n";
	}
	

	cout<<"\t\t\t\t_________Второе задание_________" << endl;
	cout << "Введите A:" << endl;
	cin >> A;
	cout << "Введите B:" << endl;
	cin >> B;
	S = Sign(A) + Sign(B);
	cout << "Значение выражения равно:" <<S<< endl;
	

	cout << "\t\t\t\t_________Третье задание_________" << endl;
	cout << "Введите R1:" << endl;
	cin >> R1;
	cout << "Введите R2:" << endl;
	cin >> R2;
	S = Rings(R1, R2);
	cout << "Площадь трех колец равна:" << S << endl;
	
	cout << "\t\t\t\t_________Четвертое задание_________" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите X:" << endl;
		cin >> X;
		cout << "Введите Y:" << endl;
		cin >> Y;
		S = Quarter(X, Y);
		cout << "Ваша точка находится в " << S << " четверти." << endl;

	}


	cout << "\t\t\t\t_________Пятое адание_________" << endl;
	cout << "Введите N:" << endl;
	cin >> N;
	S = Fact2(N);
	cout << "Двойной факториал вашего числа равен: " <<S<< endl;
	return 0;
}