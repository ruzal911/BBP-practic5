#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
     double gradus,a;
    cout << "Введите значение угла в гардусах: " << endl;
    cin >> a;
    if (a <=360)
        gradus= a / 180;
    cout <<"Угол в радианах равен: "<< gradus <<"pi"<<endl;
}