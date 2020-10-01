#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
     double gradus,a,X,A,Y;
    /* cout << "\t\t\t\t_____________Перовое задание_____________ " << endl;
    cout << "Введите значение угла в гардусах: " << endl;
    cin >> a;
    if (a <=360)
        gradus= a / 180;
    cout <<"Угол в радианах равен: "<< gradus <<"pi"<<endl;
   

    cout << "\t\t\t\t_____________Второе задание_____________ " << endl;
    cout << "Введите значение угла в радианах: " << endl;
    cin >> a;
    if (a <= 360)
        gradus = a * 180;
    cout << "Угол в градусах равен: " << gradus <<endl;
    */

    cout << "\t\t\t\t_____________Третье задание_____________ " << endl;
    cout << "Введите вес конфет:" << endl;
    cin >> X;
    cout << "Введите стоимость конфет:" << endl;
    cin >> A;
    A = A / X;
    cout << "Введите вес конфет:" << endl;
    cin >> Y;
    X = Y * A;
    cout << "Стоимость конфет за 1 кг составляет: " << A << endl;
    cout << "Стоимость конфет за "<<A<<" кг составляет: " << X << endl;

}