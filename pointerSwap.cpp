#include <iostream>

using namespace std;

void swap(int* a,int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int main(){

	int a = 9;
	int b = 10;
	int* pa = &a;
	int* pb = &b;
	swap(pa,pb);
	cout << a << " " << b;

	return 0;
}
