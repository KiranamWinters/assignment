#include <iostream>

using namespace std;

int main()
{
	int input;
	int result = 0;
	cout << "How many n terms\n";
	cin >> input;
	for (int i = 0; i <= input; i++)
	{
		if (i % 2 == 0)
		{
			result -= i;
		}
		else
		{
			result += i;
		}
	}
	cout << "Sum of n terms is: " << result;
	return 0;
}
