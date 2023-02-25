#include <iostream>

using namespace std;
int fibbonacciWR(int n){
	if (n==0 | n==1){
		return 1;
	}
	return fibbonacciWR(n-1) + fibbonacciWR(n-2);
}

int fibbonacciWI(int x){
	int result = 0;
	for (int n=0,m=1,s=n+m;m<=x; n=m,m=s){
		result = result +s;
	}
	return result;
}
int main(){
	cout << fibbonacciWR(6)<< endl;
	cout << fibbonacciWI(6) << endl;
	
}
