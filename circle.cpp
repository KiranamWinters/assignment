#include <iostream>
#define PI 3.14159265359

using namespace std;

float circumference(float radius){
	return 2 * PI * radius;
	
}
float areaCircle(float radius){
	return PI* radius * radius;
}
	
int main(){
	float radius;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "\nCircuference is: " << circumference(radius) << endl;
	cout << "Area of circle is: " << areaCircle(radius) << endl;
	return 0;
	
}
