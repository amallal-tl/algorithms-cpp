#include <iostream>

using namespace std;

struct vec1{
	int a;
	string b;
} v1;

int main(){
	v1.a = 10;
	v1.b = "Amal";
	cout << v1.b << " = " << v1.a << endl;
	vec1 v2;
	v2.a = 20;
	v2.b = "Amal2";
	cout << v2.b << " = " << v2.a << endl;
}