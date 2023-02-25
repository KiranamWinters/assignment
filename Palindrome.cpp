#include <iostream>
#include <string.h>

using namespace std;
bool isPalindrome(string str)
{
    for (int i = 0, m = str.size() - 1; m > str.size(), i < str.size(); i++, m--)
    {
        if (str[i] != str[m])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Input a String : ";
    cin >> str;
    if (isPalindrome(str) == true)
    {
        cout << "The string is a Palindrome.";
    }
    else
    {
        cout << "The string is not a Palindrome.";
    }
    return 0;
}