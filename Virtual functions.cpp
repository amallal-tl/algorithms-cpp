#include<iostream>

using namespace std;

class Parent{
	public:
	virtual void print(){
		cout << "Parent" << endl;
	}
};

class Child : public Parent{
	public:
	void print(){
		cout << "Child" << endl;
	}
};

int main(){
	Child* c1 = new Child();
	c1->print();
	
	Parent* p1 = new Parent();
	p1->print();
	
	Parent* p2 = new Child();
	p2->print();
	
	Child* c2 = p1;
	c2->print();
}