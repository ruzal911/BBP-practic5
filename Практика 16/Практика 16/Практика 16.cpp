#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int N,A,B,D;
	
	cout << "\t\t\t\t______Первое задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	int *a1 = new int[N/2+1];//Создаю динамический массив
	int k = 1;
	for (int i = 0; i < N / 2 + 1; i++)
	{
		a1[i] = k;
		k += 2;
	}
	for (int i = 0; i < N / 2 + 1; i++)
	{
		cout << a1[i] << endl;
	}
	delete[]a1;//Удаляю динамический массив
	


	cout << "\t\t\t\t______Второе задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	cout << "Введите A" << endl;
	cin >> A;
	cout << "Введите D" << endl;
	cin >> D;
	cout << endl;
	int *a2 = new int[N];
	a2[0] = A;
	int l = 1;
	for (int i = 1; i < N; i++)
	{
		a2[i] = A*pow(D,l);
		l++;
	}
	for (int i = 0; i < N; i++)
	{
		cout << a2[i] << endl;
	}
	delete[]a2;
	

	cout << "\t\t\t\t______Третье задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	cout << "Введите число А:" << endl;
	cin >> A;
	cout << "Введите число В:" << endl;
	cin >> B;
	cout << endl;
	int *a3 = new int[N];
	a3[0] = A;
	a3[1] = B;
	for (int i = 2; i < N; i++)
		a3[i] = a3[i - 1] + a3[i-2];
	for (int i = 0; i < N; i++)
	{
		cout << a3[i] << endl;
	}
	delete[]a3;
	

	cout << "\t\t\t\t______Четвертое задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	int *a4 = new int[N];
	for (int i = 0; i < N; i++)
	{
		a4[i] = i;
	}
	for (int i = 1; i < N/2; i++)
	{
		cout << a4[i] << endl;
		cout << a4[N - i] << endl;
	}
	delete[]a4;
	

	cout << "\t\t\t\t______Пятое задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	int *a5 = new int[N];
	for (int i = 0; i < N; i++)
		a5[i] = i;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			cout << a5[i] << endl;
	}
	cout << endl;
	for (int i = N-1; i >0; i--)
	{
		if (i % 2 != 0)
			cout << a5[i] << endl;
	}
	delete[]a5;

	return 0;
}
