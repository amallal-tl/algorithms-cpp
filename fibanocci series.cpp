#include <iostream>

using namespace std;
class A{
	public:
	void fibanocci(int limit){
		int first = 0, second = 1;
		cout << first << " ";
		for(int i = 2; i < limit; i++){
			int finals = first + second;
			first = second;
			second = finals;
			cout << first << " "; 
		}
		
	}
};

int main(){
A a;
int limit = 10;
a.fibanocci(limit);
}