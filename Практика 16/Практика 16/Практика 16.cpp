#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int N,A,B,D;
	
	cout << "\t\t\t\t______Первое задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	int *arr = new int[N/2+1];//Создаю динамический массив
	int k = 1;
	for (int i = 0; i < N / 2 + 1; i++)
	{
		arr[i] = k;
		k += 2;
	}
	for (int i = 0; i < N / 2 + 1; i++)
	{
		cout << arr[i] << endl;
	}
	delete []arr//Удаляю динамический массив
	


	cout << "\t\t\t\t______Второе задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	cout << "Введите A" << endl;
	cin >> A;
	cout << "Введите D" << endl;
	cin >> D;
	cout << endl;
	int* arr = new int[N];
	arr[0] = A;
	int l = 1;
	for (int i = 1; i < N; i++)
	{
		arr[i] = A*pow(D,l);
		l++;
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;
	

	cout << "\t\t\t\t______Третье задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	cout << "Введите число А:" << endl;
	cin >> A;
	cout << "Введите число В:" << endl;
	cin >> B;
	cout << endl;
	int* arr = new int[N];
	arr[0] = A;
	arr[1] = B;
	for (int i = 2; i < N; i++)
		arr[i] = arr[i - 1] + arr[i-2];
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;
	

	cout << "\t\t\t\t______Четвертое задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = i;
	}
	for (int i = 1; i < N/2; i++)
	{
		cout << arr[i] << endl;
		cout << arr[N - i] << endl;
	}
	delete[]arr;
	

	cout << "\t\t\t\t______Пятое задание______" << endl;
	cout << "Введите N" << endl;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = i;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			cout << arr[i] << endl;
	}
	cout << endl;
	for (int i = N; i >0; i--)
	{
		if (i % 2 != 0)
			cout << arr[i] << endl;
	}

	return 0;
}
