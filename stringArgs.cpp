#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{

	char letters[26];
	int letterNumber[26];
	int k = 0;
	char word[255];
	while (argv[1][k] != '\0')
	{
		word[k] = (char)tolower(argv[1][k]);
		k++;
		if (argv[1][k + 1] == '\0')
		{
			word[k + 1] = '\0';
		}
	}
	for (int i = 97; i < 123; i++)
	{
		letters[i - 97] = char(i);
	}
	for (int i = 0; i < 26; i++)
	{
		letterNumber[i] = 0;
	}
	int i = 0;
	while (word[i] != '\0')
	{
		letterNumber[word[i] - 'a']++;
		i++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << letters[i] << " : " << letterNumber[i] << endl;
	}
	return 0;
}
