#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B,k,N,S,P;
    
    cout << "\t\t\t\t________Первое задание________" << endl;
    cout << "Введите A" << endl;
    cin >> A;
    cout << "Введите B" << endl;
    cin >>  B;
    for (int i = A; i <= B; i++,A++)
    {
        for (int j = 0; j < A; j++)
        {
            cout << A;
        }
        cout << endl;
    }
    


    cout << "\t\t\t\t________Второе задание________" << endl;
    cout << "Введите A" << endl;
    cin >> A;
    cout << "Введите B" << endl;
    cin >> B;
    k = 0;
    for ( int i = B; i <= A; i+=B)
    {
        k++;

    }
    cout << "Длинна незанятой части отрезка A равна: " << k << endl;
    

    cout << "\t\t\t\t________Третье задание________" << endl;
    cout << "Введите N" << endl;
    cin >> N;
    S = 0; k = 0;
    while (!(S>=N))
    {
        k++;
        S += k;
    }
    cout << "Наименьшее из целых К равно: " << k << endl;
    cout << "Сумма равна: " << S << endl;
    

     cout << "\t\t\t\t________Четвертое задание________" << endl;
     cout << "Введите процент:" << endl;
     cin >> P;
     S = 1000; k = 0;
     while (S<=1100)
     {
         S = S * P / 100 + S;
         k++;

     }
     cout << "Количество месяцев равно: " << k << endl;
     cout << "Итоговый размер вклада: " << S << endl;
     

    cout << "\t\t\t\t________Пятое задание________" << endl;
    cout << "Введите A" << endl;
    cin >> A;
    cout << "Введите B" << endl;
    cin >> B;
    while (A != B)
        if (A > B)
            A = A - B;
    else
    B = B - A;
    cout << "НОД равен:" <<A<< endl;
    

    cout << "\t\t\t\t________Шестое задание________" << endl;
    cout << "Введите N" << endl;
    cin >> N;
    A = 1; B = 0; k = 0; S = 0;
    for (int i = 1; S<N; i++)
    {
        S = A + B;
        A = B;
        B = S;
        k++;
    }
    cout << "Порядковыый номер числа Фибоначчи равен:" << k << endl;

    return 0;
}
