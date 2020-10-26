#include <iostream>
using namespace std;

int main()
{
	int a, n,R=1;
	cin >> n;
	cin >> a;
	for (int i = 0; i < n; i++)
	{
		R *= pow(a, i+1);
	}
	cout << R<<endl;
	return 0;

}
