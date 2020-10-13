#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int day, month;
	string d, m;
	cout << "Введите день:" << endl;
	cin >> day;
	cout << "Введите месяц" << endl;
	cin >> month;
	switch (day)
	{
	case 1:d = "первое";
			break;
	case 2:d = "второе";
		break;
	case 3:d = "третье";
		break;
	case 4:d = "четвертое";
		break;
	case 5:d = "пятое";
		break;
	case 6:d = "шестое";
		break;
	case 7:d = "седьмое";
		break;
	case 8:d = "восьмое";
		break;
	case 9:d = "девятое";
		break;
	case 10:d = "десятое";
		break;
	case 11:d = "одинатцатое";
		break;
	case 12:d = "двенатцатое";
		break;
	case 13:d = "тринадцатое";
		break;
	case 14:d = "четырнадцатое";
		break;
	case 15:d = "пятнадцатое";
		break;
	case 16:d = "шестнадцатое";
		break;
	case 17:d = "семнадцатое";
		break;
	case 18:d = "восемнадцатое";
		break;
	case 19:d = "девятнадцатое";
		break;
	case 20:d = "двадцатое";
		break;
	case 21:d = "двадцать первое";
		break;
	case 22:d = "двадцать второе";
		break;
	case 23:d = "двадцать третье";
		break;
	case 24:d = "двадцать четвертое";
		break;
	case 25:d = "двадцать пятое";
		break;
	case 26:d = "двадцать шестое";
		break;
	case 27:d = "двадцать седьмое";
		break;
	case 28:d = "двадцать восьмое";
		break;
	case 29:d = "двадцать девятое";
		break;
	case 30:d = "тридцатое";
		break;
	case 31:d = "тридцать первое";
		break;
	default:
		break;
	}
	switch (month)
	{
	case 1:m = "января";
		break;
	case 2:m = "февраля";
		break;
	case 3:m = "марта";
		break;
	case 4:m = "апреля";
		break;
	case 5:m = "мая";
		break;
	case 6:m = "июня";
		break;
	case 7:m = "июля";
		break;
	case 8:m = "августа";
		break;
	case 9:m = "сентября";
		break;
	case 10:m = "октября";
		break;
	case 11:m = "ноября";
		break;
	case 12:m = "декабря";
		break;
		
	default:
		break;
	}
	
	cout << "Вы ввели такую дату " << d << " " << m << endl;
	
	
	return 0;
}