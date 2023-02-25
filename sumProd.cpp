#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{

    return a * b;
}
int main()
{
    int a = 5;
    int b = 9;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    std::cin.get();
    return 0;
}