#include <iostream>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "RUS");
	double price,k,k1,d,S,A;
	int N;
	cout << "\t\t\t\t_________Перове задание_________" << endl;
	cout << "Введите стоимость кофет за кг:" << endl;
	cin >> price;
	k = price / 10;
	k1 = k;
	d = 0.1;
	for  (int i = 1;  i <= 10;  i++)
	{
		cout << "Цена конфет за " << d << " кг равна " << k << endl;
		k += k1;
		d =d+0.1;
	}


	cout << "\t\t\t\t_________Второе задание_________" << endl;
	cout << "Введите N:" << endl;
	cin >> N;
	S = 1; k = 1.1;
	for (int i = 0; i < N; i++)
	{
		S *= k;
		k += 0.1;
	}
	cout << "Произведение равно: " <<S<< endl;
	


	cout << "\t\t\t\t_________Третье задание_________" << endl;
	cout << "Введите N:" << endl;
	cin >> N;
	S = 0; k = 1;
	for ( int i = 0; i < 2*N-1; i+=2)
	{
		S += k;
		k+=2;
		cout << "Текущее значение равно: " << S << endl;
	}
	

	cout << "\t\t\t\t_________Четвертое задание_________" << endl;
	cout << "Введите A:" << endl;
	cin >> A;
	cout << "Введите N:" << endl;
	cin >> N;
	S = 1;
	for ( int i = 0; i <N ; i++)
	{
		S += pow(A, i + 1);
	}
	cout<<"Сумма элементов равна: "<<S << endl;
	


	cout << "\t\t\t\t_________Пятое задание_________" << endl;
	cout << "Введите A:" << endl;
	cin >> A;
	cout << "Введите N:" << endl;
	cin >> N;
	S = 1;
	for (int i=0; i< N;i++)
	{
		S = S + pow(-A, i+1);
	}
	cout << "Значение выражения равно: " << S << endl;

	return 0;
}