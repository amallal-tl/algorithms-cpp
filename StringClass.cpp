#include <iostream>
#include <cstring>

using namespace std;

class StringClass{
	char* str;
	public:
	StringClass(){
		str = new char[1];
		str[0] = '\0';
		cout << "Null string" << endl;
	}
	StringClass(char* s){
		if(s != nullptr){
			cout << "Non null string" << endl;
			this->str = new char[strlen(s)+1];
			this->str[strlen(s)] = '\0';
			strcpy(this->str, s);
		}		
	}
	
	void print(){
		cout << "Str = " << str << endl;
	}
	
	StringClass(const StringClass& string){
		str = new char[strlen(string.str)+1];
		strcpy(str, string.str);
		str[strlen(str)] = '\0';
	}
};

int main(){
	char s[] = "Amal";
	StringClass str1(s);
	str1.print();
	//StringClass str2;//No arguement
	//str2.print();//No arguement
	StringClass str3 {str1};//Copy constructor
	str3.print();
}