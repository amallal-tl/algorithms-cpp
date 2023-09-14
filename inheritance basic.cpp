#include <iostream>

using namespace std;

class Parent{
	private:
	void printPrivate(){
		cout << "I'm private" << endl;
	}
	
	protected:
	void printProtected(){
		cout << "I'm protected" << endl;
	}
	
	public:
	void printPublic(){
		cout << "I'm public" << endl;
	}
};

class Child : protected Parent{
	
};

int main(){
	Child c;
	//c.printPublic();
	c.printProtected();
	//c.printPrivate();
}