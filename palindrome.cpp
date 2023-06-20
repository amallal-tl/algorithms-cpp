#include<iostream>

using namespace std;

//1234321  1331 3457
bool palindrome(int number){
	int temp = number, rev = 0;
	while(temp > 0){
		rev = (rev * 10) + (temp%10);
		temp = temp/10;
	}
	return rev == number ? true : false;
}

int main(){
	int b;
	cin >> b;
	cout << "Is number " << b << " a palindrome number? Let's check it" << endl;
	palindrome(b) ? cout << "Is a palindrome number" :
					cout << "Is not a palindrome";
}