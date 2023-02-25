#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;
int count(char *letters);
// function that prints address in console
void showAddress(char *letters, int size)
{
	for (int i = 0; i < size; i++)
	{
		// adding i to get next element
		//&letters gives address of first element in array
		cout << &letters + i << endl;
	}
}
// adding to strings
void concatenate(char *letters, int size)
{
	char str2[255];
	cout << "Enter string to concatenate with: ";
	cin >> str2;
	for (int i = 0; i <= count(str2); i++)
	{
		letters[size + i] = str2[i];
	}
	cout << letters << endl;
}
// Comparing str1 to str2
void compare(char *str1, int size)
{
	char str2[255];
	cout << "Enter second string: ";
	cin >> str2;
	// if each characters of a string don't match then condition 1 is executed otherwise condition 2 is executed
	for (int i = 0; i < count(str2); i++)
	{
		// condition #1
		if (str1[i] != str2[i])
		{
			cout << "They don't match!" << endl;
			break;
		}
		// conditon #2
		else
		{
			cout << "They match!" << endl;
			break;
		}
	}
}
// usually a char array is terminated with '\0' character
int count(char *letters)
{
	int i = 0, count = 0;
	// counting the number of element till we hit '\0'
	while (letters[i] != '\0')
	{
		count += 1;
		i++;
	}
	return count;
}
// function to change uppercase to lowercase
void lowerise(char *letters, int size)
{
	for (int i = 0; i < size; i++)
	{
		// checking if the letters are uppercase using ASCII
		// 65 = 'A' | 90 = 'Z'
		if (letters[i] > 64 && letters[i] < 91)
		{
			// adding 32 to turn uppercase to lowercase
			// 65 + 32 = 97
			//'A' = 65
			// 'a' = 97
			letters[i] = letters[i] + 32;
		}
	}
	cout << letters;
}

void upperise(char *letters, int size)
{
	for (int i = 0; i < size; i++)
	{
		// checking for lowercase
		if (letters[i] > 'a' - 1 && letters[i] < 'z' - 1)
		{
			// subtracting 32 to turn lowercase to uppercase
			// 'a' = 97
			// 97 - 32 = 65
			// 'A' = 65
			letters[i] = letters[i] - 32;
		}
	}
	cout << letters;
}
void countVowels(char *letters, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		// incrementing variable count if char is a,e,i,o,u
		if (letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' || letters[i] == 'o' || letters[i] == 'u')
		{
			count += 1;
		}
	}
	cout << count;
}
// function to reverse string
void reverseStr(char *str1, int size)
{
	// reverse iteration
	char temp[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = str1[i];
	}
	for (int i = 0; i < size; i++)
	{
		str1[size - 1 - i] = temp[i];
	}
	cout << str1;
}
int main()
{
	char word[255];
	cout << "Enter base String: ";
	cin >> word;
	int size = count(word);
	char input;
	while (input != 'e')
	{
		cout << "press e to exit" << endl;
		cout << "press s to Show all address" << endl;
		cout << "press a to add two strings " << endl;
		cout << "press c to use strcat to concatenate two string" << endl;
		cout << "press b to compare string with another string" << endl;
		cout << "press i to know the length of string" << endl;
		cout << "press l to convert to lowercase" << endl;
		cout << "press u to convert to uppercase" << endl;
		cout << "press v to know all vowels" << endl;
		cout << "press r to reverse the string" << endl;
		input = getch();
		switch (input)
		{
		case 's':
			showAddress(word, size);
			break;
		case 'a':
			concatenate(word, size);
			break;
		case 'c':
			char a[255];
			cin >> a;
			strcat(word, a);
			break;
		case 'b':
			compare(word, size);
			break;
		case 'i':
			cout << count(word) << endl;
			break;
		case 'l':
			lowerise(word, size);
			break;
		case 'u':
			upperise(word, size);
			break;
		case 'v':
			countVowels(word, size);
			break;
		case 'r':
			reverseStr(word, size);
			break;

		default:
			continue;
		}
	}
}
