#include<iostream>
using namespace std;
int main()
{
	int i, j, a;
	cin >> a;
	if (a <= 15)
	{
		for (i = 1; i <= a; i++)
		{
			for (j = 1; j <= a; j++)
			{
				if (i == 1 || i == a || j == 1 || j == a)
					printf("%X ", a);
				else
					printf("  ");

			}
			cout << endl;
		}
	}
	else
		cout << "Error";
	
	return 0;
}