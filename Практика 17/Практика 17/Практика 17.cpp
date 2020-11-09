#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL,"RUS");
	srand(time(NULL));
	int N, K, L;
	double S,k;
	bool check;
	cout << "\t\t\t\t_________Первое задание_________" << endl;
	cout << "Введите N:" << endl;
	cin >> N;
	cout << "Введите K:" << endl;
	cin >> K;
	cout << "Введите L:" << endl;
	cin >> L;
	int* a = new int[N];
	for (int i = 0; i < N; i++)
		a[i] = i;
	k = 0; S = 0;
	for (int i = K; i <= L; i++)
	{
		S += a[i];
		k++;
	}
	S = S / k;
	cout<<"Среднее арифметическое элементов массива: "<<S << endl;
	delete []a;
	


	cout << "\t\t\t\t_________Второе задание_________" << endl;
	cout << "Введите длину массива:" << endl;
	cin >> N; S = 0;
	int* a1 = new int[N];
	cout << "Введите массив:" << endl; 
	for (int i = 0; i < N; i++)
	{
		cin>>a1[i];
	}
	for (int i = 0; i < N-1; i++)
	{
		if (a1[i] < a1[i + 1])
			check = 1;
		else
			check = 0;
	}
	if (check == 1)
	{
		for (int i = 0; i < N; i++)
			S = S - a1[i];
		cout <<"Разность прогрессии равна: "<< S << endl;
	}
	if (check == 0)
		cout << 0 << endl;
	delete []a1;
	


	cout << "\t\t\t\t_________Третье задание_________" << endl;
	cout << "Введите N:" << endl;
	cin >> N;
	int* a2 = new int[N]; K = 10000000000;
	for  (int i = 0; i < N;i++)
	{
		a2[i] = rand();
		cout << a2[i] << endl;
	}
	for (int i = 0; i < N; i++)
	{
		if ((i % 2 == 0) && (a2[i] < K))
			K = a2[i];
	}
	cout <<"\nМинимальный элемент равен:"<< K << endl;
	

	cout << "\t\t\t\t_________Четвертое задание_________" << endl;
	cout << "Введите N:" << endl;
	cin >> N;
	int* a3 = new int[N];
	for (int i = 0; i < N; i++)
	{
		a3[i] = rand();
		cout << a3[i] << endl;
	}
	for (int i = 1; i < N-1; i++)
	{
		if ((a3[i] > a3[i-1]) && (a3[i] > a3[i+1]))
			K = a3[i];
		
			
	}
	 cout << "\nПоследний локальный максимум равен" << K << endl;
	 

	 cout << "\t\t\t\t_________Пятое задание_________" << endl;
	 int arr[] = { 2,55,31,3,1,168,41,351,35,12,5,2,4,6 };
	 int a, b;
	 for (int i = 0; i < sizeof(arr)/4-1; i++)
	 {
		 for (int j = i+1; j < sizeof(arr) / 4; j++)
		 {
			 if (arr[i] == arr[j])
			 {
				 a = i;
				 b = j;
			 }
		 }
	 }
	 if (a > b)
		 cout << b <<" "<< a << endl;
	 if (a < b)
		 cout << a << " " << b << endl;
	return 0;
}
