#include<iostream>
#include<locale>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    cout << "\t\t\t_________������ �������_________" << endl;
    int a, b;
    cout << " input day" << endl;
    cin >> a;
    cout << " input month" << endl;
    cin >> b;
    switch (a) {
    case 1:
        cout << "������ ";
        break;
    case 2:
        cout << "������ ";
        break;
    case 3:
        cout << "������ ";
        break;
    case 4:
        cout << "��������� ";
        break;
    case 5:
        cout << "����� ";
        break;
    case 6:
        cout << "������ ";
        break;
    case 7:
        cout << "������� ";
        break;
    case 8:
        cout << "������� ";
        break;
    case 9:
        cout << "������� ";
        break;
    case 10:
        cout << "������� ";
        break;
    case 11:
        cout << "������������ ";
        break;
    case 12:
        cout << "����������� ";
        break;
    case 13:
        cout << "����������� ";
        break;
    case 14:
        cout << "������������� ";
        break;
    case 15:
        cout << "���������� ";
        break;
    case 16:
        cout << "������������ ";
        break;
    case 17:
        cout << "������������ ";
        break;
    case 18:
        cout << "������������� ";
        break;
    case 19:
        cout << "������������� ";
        break;
    case 20:
        cout << "��������� ";
        break;
    case 21:
        cout << "�������� ������ ";
        break;
    case 22:
        cout << "�������� ������ ";
        break;
    case 23:
        cout << "�������� ������ ";
        break;
    case 24:
        cout << "�������� ��������� ";
        break;
    case 25:
        cout << "�������� ����� ";
        break;
    case 26:
        cout << "�������� ������ ";
        break;
    case 27:
        cout << "�������� ������� ";
        break;
    case 28:
        cout << "�������� ������� ";
        break;
    case 29:
        cout << "�������� ������� ";
        break;
    case 30:
        cout << "���������";
        break;
    case 31:
        cout << "�������� ������";
        break;
    }
    switch (b) {

    case 1:
        cout << " ������" << endl;
        break;
    case 2:
        cout << "�������" << endl;
        break;
    case 3:
        cout << "�����" << endl;
        break;
    case 4:
        cout << "������" << endl;
        break;
    case 5:
        cout << "���" << endl;
        break;
    case 6:
        cout << "����" << endl;
        break;
    case 7:
        cout << "����" << endl;
        break;
    case 8:
        cout << "�������" << endl;
        break;
    case 9:
        cout << "��������" << endl;
        break;
    case 10:
        cout << "�������" << endl;
        break;
    case 11:
        cout << "������";
        break;
    case 12:
        cout << "�������" << endl;
        break;
    }



    cout << "\t\t\t_________������ �������_________" << endl;

    int   n;
    char s;

    cout << "������� ������ ����������� (�n� � �����, �w� � �����, �s� � ��, �e� � ������): ";
    cin >> s;
    cout << "������� �������� ������� ��� ������ (0 � ���������� ��������, 1 � ������� ������, -1 � ������� �������): ";
    cin >> n;
    cout << "����������� - ";
    switch (n) {
    case 1: switch (s) {
    case 'n':
        cout << "�����" << endl;
        break;
    case 's':
        cout << "������" << endl;
        break;
    case 'w':
        cout << "��" << endl;
        break;
    case 'e':
        cout << "�����" << endl;
        break;
    }
    case -1: switch (s) {
    case 'n':
        cout << "������" << endl;
        break;
    case 's':
        cout << "�����" << endl;
        break;
    case 'w':
        cout << "�����" << endl;
        break;
    case 'e':
        cout << "��" << endl;
        break;
    }
    case 0: switch (s) {
    case 'n':
        cout << "�����" << endl;
        break;
    case 's':
        cout << "��" << endl;
        break;
    case 'w':
        cout << "�����" << endl;
        break;
    case 'e':
        cout << "������" << endl;
        break;
    }

    }



    cout << "\t\t\t_________������ �������_________" << endl;
    cout << "���������� : ";
    cin >> n;
    if (n / 10 == 1)
        switch (n) {
        case 10:
            cout << "������ ������� ������� " << endl;
            break;
        case 11:
            cout << "���������� ������� �������" << endl;
            break;
        case 12:
            cout << "���������� ������� �������" << endl;
            break;
        case 13:
            cout << "���������� ������� �������" << endl;
            break;
        case 14:
            cout << "������������ ������� �������" << endl;
            break;
        case 15:
            cout << "���������� ������� �������" << endl;
            break;
        case 16:
            cout << "����������� ������� �������" << endl;
            break;
        case 17:
            cout << "���������� ������� �������" << endl;
            break;
        case 18:
            cout << "������������ ������� �������" << endl;
            break;
        case 19:
            cout << "������������ ������� �������" << endl;
            break;

        }
    else {
        switch (n / 10) {
        case 2:
            cout << "�������� ";
            break;
        case 3:
            cout << "�������� ";
            break;
        case 4:
            cout << "����� ";
            break;

        }

        switch (n % 10) {
        case 1:
            cout << "���� ";
            break;
        case 2:
            cout << "��� ";
            break;
        case 3:
            cout << "��� ";
            break;
        case 4:
            cout << "������ ";
            break;
        case 5:
            cout << "���� ";
            break;
        case 6:
            cout << "����� ";
            break;
        case 7:
            cout << "���� ";
            break;
        case 8:
            cout << "������ ";
            break;
        case 9:
            cout << "������ ";
            break;
        }
        switch (n % 10) {
        case 0:
            cout << "������� ������� " << endl;
            break;
        case 5:
            cout << "������� ������� " << endl;
            break;
        case 6:
            cout << "������� ������� " << endl;
            break;
        case 7:
            cout << "������� ������� " << endl;
            break;
        case 8:
            cout << "������� ������� " << endl;
            break;
        case 9:
            cout << "������� ������� " << endl;
            break;
        case 1:
            cout << "������� ������� " << endl;
            break;
        case 2:
            cout << "������� ������� " << endl;
            break;
        case  3:
            cout << "������� ������� " << endl;
            break;
        case 4:
            cout << "������� ������� " << endl;
            break;


        }
    }




    cout << "\t\t\t_________��������� �������_________" << endl;
    cout << "������� ����� �� 100 �� 999" << endl;;
    cin >> n;
    switch (n / 100) {
    case 1:
        cout << "��� ";
        break;
    case 2:
        cout << "������ ";
        break;
    case 3:
        cout << "������ ";
        break;
    case 4:
        cout << "��������� ";
        break;
    case 5:
        cout << "������� ";
        break;
    case 6:
        cout << "�������� ";
        break;
    case 7:
        cout << "������� ";
        break;
    case 8:
        cout << "��������� ";
        break;
    case 9:
        cout << "��������� ";
        break;
    }
    if (((n % 100) / 10) == 1) {
        switch (n % 100) {
        case 10:
            cout << "������ ";
            break;
        case 11:
            cout << "���������� ";
            break;
        case 12:
            cout << "���������� ";
            break;
        case 13:
            cout << "���������� ";
            break;
        case 14:
            cout << "������������ ";
            break;
        case 15:
            cout << "���������� ";
            break;
        case 16:
            cout << "����������� ";
            break;
        case 17:
            cout << "���������� ";
            break;
        case 18:
            cout << "������������ ";
            break;
        case 19:
            cout << "������������ ";
            break;
        }

    }
    else {
        switch ((n % 100) / 10) {

        case 2:
            cout << "�������� ";
            break;
        case 3:
            cout << "�������� ";
            break;
        case 4:
            cout << "����� ";
            break;
        case 5:
            cout << "��������� ";
            break;
        case 6:
            cout << "���������� ";
            break;
        case 7:
            cout << "��������� ";
            break;
        case 8:
            cout << "����������� ";
            break;
        case 9:
            cout << "��������� ";
            break;

        }
        switch (n % 10) {
        case 1:
            cout << "���� ";
            break;
        case 2:
            cout << "��� ";
            break;
        case 3:
            cout << "��� ";
            break;
        case 4:
            cout << "������ ";
            break;
        case 5:
            cout << "���� ";
            break;
        case 6:
            cout << "����� ";
            break;
        case 7:
            cout << "���� ";
            break;
        case 8:
            cout << "������ ";
            break;
        case 9:
            cout << "������ ";
            break;

        }

    }

    cout << endl;

    cout << "\t\t\t_________����� �������_________" << endl;
    int year;
    cin >> year;
    cout << "���- ";
    switch (year % 10) {
    case 0:
    case 1:
        cout << "����� ";
        break;
    case 2:
    case 3:
        cout << "������ ";
        break;
    case 4:
    case 5:
        cout << "������ ";
        break;
    case 6:
    case 7:
        cout << "������� ";
        break;
    case 8:
    case 9:
        cout << "����� ";
        break;
    }
    switch ((year + 8) % 12) {
    case 0:
        cout << "�����";
        break;
    case 1:
        cout << "������";
        break;
    case 2:
        cout << "�����";
        break;
    case 3:
        cout << "�����";
        break;
    case 4:
        cout << "�������";
        break;
    case 5:
        cout << "����";
        break;
    case 6:
        cout << "������";
        break;
    case 7:
        cout << "����";
        break;
    case 8:
        cout << "��������";
        break;
    case 9:
        cout << "������";
        break;
    case 10:
        cout << "������";
        break;
    case 11:
        cout << "������";
        break;
    }
    return 0;
}




