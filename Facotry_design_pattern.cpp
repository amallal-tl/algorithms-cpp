#include <iostream>

using namespace std;

class Button{
	virtual void button() = 0;
};

Class WindowsButton : public Button{
	void button(){
	cout << "WindowsButton" << endl;
	}
};

Class MacButton: public Button{
	void button(){
	cout << "MacButton" << endl;
	}
};

class ButtonFactory{
virtual Button* buttonsCreator() = 0;
};

class WindowsButtonFactory : public ButtonFactory{
	Button* buttonsCreator(){
		return new WindowsButton();
	}
};

class MacButtonFactory : public ButtonFactory{
	Button* buttonsCreator(){
		return new MacButton();
	}
};

int main(){
ButtonFactory* b = new WindowsButtonFactory();
b->button();
}