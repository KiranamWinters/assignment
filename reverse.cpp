#include <iostream>

using namespace std;

int main()
{
	int input;
	cout << "enter numbner: \n";

	cin >> input;
	cout << "Reverse numbers: " << endl;
	for (int i = input; i > 0; i--)
	{
		cout << i << endl;
	}
	return 0;
}
