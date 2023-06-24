//g++ -o a.exe main.cpp static.cpp && a.exe
#include <iostream>

using namespace std;

static int externalVar = 20;

int main(){
	cout << externalVar << endl;
}