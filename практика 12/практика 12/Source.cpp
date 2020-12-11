#include<iostream>
#include<locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    cout << "\t\t\t_________Первое задание_________" << endl;
    int a, b;
    cout << " input day" << endl;
    cin >> a;
    cout << " input month" << endl;
    cin >> b;
    switch (a) {
    case 1:
        cout << "первое ";
        break;
    case 2:
        cout << "второе ";
        break;
    case 3:
        cout << "третье ";
        break;
    case 4:
        cout << "четвертое ";
        break;
    case 5:
        cout << "пятое ";
        break;
    case 6:
        cout << "шестое ";
        break;
    case 7:
        cout << "седьмое ";
        break;
    case 8:
        cout << "восьмое ";
        break;
    case 9:
        cout << "девятое ";
        break;
    case 10:
        cout << "десятое ";
        break;
    case 11:
        cout << "одиннадцатое ";
        break;
    case 12:
        cout << "двенадцатое ";
        break;
    case 13:
        cout << "тринадцатое ";
        break;
    case 14:
        cout << "четырнадцатое ";
        break;
    case 15:
        cout << "пятнадцтое ";
        break;
    case 16:
        cout << "шестнадцатое ";
        break;
    case 17:
        cout << "семьнадцатое ";
        break;
    case 18:
        cout << "восемнадцатое ";
        break;
    case 19:
        cout << "девятнадцатое ";
        break;
    case 20:
        cout << "двадцатое ";
        break;
    case 21:
        cout << "двадцать первое ";
        break;
    case 22:
        cout << "двадцать второе ";
        break;
    case 23:
        cout << "двадцать третье ";
        break;
    case 24:
        cout << "двадцать четвертое ";
        break;
    case 25:
        cout << "двадцать пятое ";
        break;
    case 26:
        cout << "двадцать шестое ";
        break;
    case 27:
        cout << "двадцать седьмое ";
        break;
    case 28:
        cout << "двадцать восьмое ";
        break;
    case 29:
        cout << "двадцать девятое ";
        break;
    case 30:
        cout << "тридцатое";
        break;
    case 31:
        cout << "тридцать первое";
        break;
    }
    switch (b) {

    case 1:
        cout << " января" << endl;
        break;
    case 2:
        cout << "февраля" << endl;
        break;
    case 3:
        cout << "марта" << endl;
        break;
    case 4:
        cout << "апреля" << endl;
        break;
    case 5:
        cout << "мая" << endl;
        break;
    case 6:
        cout << "июня" << endl;
        break;
    case 7:
        cout << "июля" << endl;
        break;
    case 8:
        cout << "августа" << endl;
        break;
    case 9:
        cout << "сентября" << endl;
        break;
    case 10:
        cout << "октября" << endl;
        break;
    case 11:
        cout << "ноября";
        break;
    case 12:
        cout << "декабря" << endl;
        break;
    }



    cout << "\t\t\t_________Второе задание_________" << endl;

    int   n;
    char s;

    cout << "Введите символ направления («n» — север, «w» — запад, «s» — юг, «e» — восток): ";
    cin >> s;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> n;
    cout << "направление - ";
    switch (n) {
    case 1: switch (s) {
    case 'n':
        cout << "запад" << endl;
        break;
    case 's':
        cout << "восток" << endl;
        break;
    case 'w':
        cout << "юг" << endl;
        break;
    case 'e':
        cout << "север" << endl;
        break;
    }
    case -1: switch (s) {
    case 'n':
        cout << "восток" << endl;
        break;
    case 's':
        cout << "запад" << endl;
        break;
    case 'w':
        cout << "север" << endl;
        break;
    case 'e':
        cout << "юг" << endl;
        break;
    }
    case 0: switch (s) {
    case 'n':
        cout << "север" << endl;
        break;
    case 's':
        cout << "юг" << endl;
        break;
    case 'w':
        cout << "запад" << endl;
        break;
    case 'e':
        cout << "восток" << endl;
        break;
    }

    }



    cout << "\t\t\t_________Третье задание_________" << endl;
    cout << "количество : ";
    cin >> n;
    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout << "десять учебных заданий " << endl;
            break;
        case 11:
            cout << "одинадцать учебных заданий" << endl;
            break;
        case 12:
            cout << "двенадцать учебных заданий" << endl;
            break;
        case 13:
            cout << "тринадцать учебных заданий" << endl;
            break;
        case 14:
            cout << "четырнадцать учебных заданий" << endl;
            break;
        case 15:
            cout << "пятнадцать учебных заданий" << endl;
            break;
        case 16:
            cout << "шестнадцать учебных заданий" << endl;
            break;
        case 17:
            cout << "семнадцать учебных заданий" << endl;
            break;
        case 18:
            cout << "восемнадцать учебных заданий" << endl;
            break;
        case 19:
            cout << "девятнадцать учебных заданий" << endl;
            break;

        }
    else {
        switch (n / 10) {
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;

        }

        switch (n % 10) {
        case 1:
            cout << "одно ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;
        }
        switch (n % 10) {
        case 0:
            cout << "учебных заданий " << endl;
            break;
        case 5:
            cout << "учебных заданий " << endl;
            break;
        case 6:
            cout << "учебных заданий " << endl;
            break;
        case 7:
            cout << "учебных заданий " << endl;
            break;
        case 8:
            cout << "учебных заданий " << endl;
            break;
        case 9:
            cout << "учебных заданий " << endl;
            break;
        case 1:
            cout << "учебное задание " << endl;
            break;
        case 2:
            cout << "учебных задания " << endl;
            break;
        case  3:
            cout << "учебных задания " << endl;
            break;
        case 4:
            cout << "учебных задания " << endl;
            break;


        }
    }




    cout << "\t\t\t_________Четвертое задание_________" << endl;
    cout << "введите число от 100 до 999" << endl;;
    cin >> n;
    switch (n / 100) {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыресто ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "девятьсот ";
        break;
    }
    if (((n % 100) / 10) == 1) {
        switch (n % 100) {
        case 10:
            cout << "десять ";
            break;
        case 11:
            cout << "одинадцать ";
            break;
        case 12:
            cout << "двенадцать ";
            break;
        case 13:
            cout << "тринадцать ";
            break;
        case 14:
            cout << "четырнадцать ";
            break;
        case 15:
            cout << "пятнадцать ";
            break;
        case 16:
            cout << "шестнадцать ";
            break;
        case 17:
            cout << "семнадцать ";
            break;
        case 18:
            cout << "восемнадцать ";
            break;
        case 19:
            cout << "девятнадцать ";
            break;
        }

    }
    else {
        switch ((n % 100) / 10) {

        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;

        }
        switch (n % 10) {
        case 1:
            cout << "один ";
            break;
        case 2:
            cout << "два ";
            break;
        case 3:
            cout << "три ";
            break;
        case 4:
            cout << "четыре ";
            break;
        case 5:
            cout << "пять ";
            break;
        case 6:
            cout << "шесть ";
            break;
        case 7:
            cout << "семь ";
            break;
        case 8:
            cout << "восемь ";
            break;
        case 9:
            cout << "девять ";
            break;

        }

    }

    cout << endl;

    cout << "\t\t\t_________Пятое задание_________" << endl;
    int year;
    cin >> year;
    cout << "год- ";
    switch (year % 10) {
    case 0:
    case 1:
        cout << "белой ";
        break;
    case 2:
    case 3:
        cout << "черной ";
        break;
    case 4:
    case 5:
        cout << "зелёной ";
        break;
    case 6:
    case 7:
        cout << "красной ";
        break;
    case 8:
    case 9:
        cout << "жёлтой ";
        break;
    }
    switch ((year + 8) % 12) {
    case 0:
        cout << "крысы";
        break;
    case 1:
        cout << "коровы";
        break;
    case 2:
        cout << "тигра";
        break;
    case 3:
        cout << "зайца";
        break;
    case 4:
        cout << "дракона";
        break;
    case 5:
        cout << "змеи";
        break;
    case 6:
        cout << "лошади";
        break;
    case 7:
        cout << "овцы";
        break;
    case 8:
        cout << "обезьяны";
        break;
    case 9:
        cout << "курицы";
        break;
    case 10:
        cout << "собаки";
        break;
    case 11:
        cout << "свиньи";
        break;
    }
    return 0;
}




