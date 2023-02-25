#include <iostream>

#define SWAP(a,b) int temp;temp=a;a=b;b=temp

using namespace std;

int main(){
	int c,d;
	c = 9;
	d = 10;
	SWAP(c,d);
	cout << c << endl;
	cout << d << endl;
	return 0;
}
