#include <iostream>

#include "external.cpp"

using namespace std;

extern int externalVar;

int main(){
	cout << externalVar << endl;
}