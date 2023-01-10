#include <iostream>
using namespace std;

void xxx(int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cout << "#";
		}
		cout << endl;
	}
}

int main()
{
	int a;
	cin >> a;
	xxx(a);
	system("pause");
}