#include <iostream>

using namespace std;

class Palindrome{
	string initialString;
	
	string getString(){
		return initialString;
	}
	
	string reverse(){
		string init = getString();
		string rev;
		for(int i = getString().size()-1; i >= 0 ; i--){
			rev += getString()[i];
		}
		return rev;
	}
	
public:		
	bool isPalindrome(){
		if(reverse() == getString())
			return true;
		else return false;
	}
	
	void setString(string init){
		initialString = init;
	}
};

int main(){
	Palindrome p;
	string pal;
	getline(cin,pal);
	cout << "Checking if " << pal << " is a palindrome" << endl;
	p.setString(pal);
	if(p.isPalindrome()){
		cout << "Yeah, its a palindrome number!" << endl;
	} else{
		cout << "Oops! Its not a palindrome number!" << endl;
	}
}