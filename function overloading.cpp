#include <iostream>

using namespace std;

template<typename T>
T add(T a, T b){
	cout << "Template ";
	return a+b;
}

double add(double a, double b){
	cout << "Overloaded ";
	return a*b;
}

int main(){
	cout<<add(1,1)<< endl;
	cout << add(1.1, 2.2)<<endl;
}