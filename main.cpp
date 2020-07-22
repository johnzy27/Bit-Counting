#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[32];
	int n;
	int i;

	cout << "Enter the number to convert: ";
	cin >> n;
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	cout << "Binary of the given number= ";
	int count = 0;
	for (i = i - 1; i >= 0; i--)
	{
		cout << a[i];
		if (a[i] == 1)
		{
			count++;
		}
		
		
	}

	cout << endl;
	cout << "Number of 1's found: " << count << endl;
	
	//system("pause");
	return 0;
}