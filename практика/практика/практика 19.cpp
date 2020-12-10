#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A[] = {1,8,3,3,4,8,4,4,65,5,5};
    int n = sizeof(A) / 4;
    /*cout << "\t\t\t\t________Первое задание________" << endl;
    for (int i = 0; i < sizeof(A) / 4-1; i++)
    {
        if ((A[i] == A[i+1]))
        {
            n--;
        }
    }
    int *AB = new int[n];
    for (int i = 1, k = 0;  i < sizeof(A)/4+1;  i++)
    {
        if ((A[i-1] != A[i]))
        {
            AB[k] = A[i-1];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << AB[i] << endl;
    }*/


    cout << "\t\t\t\t________Второе задание________" << endl;
    int C[] = { 1,3,4,5,6,7,8,9,1,6,9,5,2 }; int k,s = 0;
    for (int i = 0; i < sizeof(C)/4; i++)
    {
        k = 0;
        for  (int j = 0;  j < sizeof(C) / 4;j++)
        {
            if (C[i] == C[j]);
            k++;
        }
        if (k == 2)
            s += 2;
    }
    int p = sizeof(C) / 4 - s;
    int* CC=new int[p];
    for (int i = 0; i < sizeof(C) / 4; i++)
    {
       
        for (int j = 0; j < sizeof(C) / 4; j++)
        {
            if (C[i] == C[j]);
            k++;
        }
        if (k == 2)
            s += 2;
    }

    
    return 0;
}

