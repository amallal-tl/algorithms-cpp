#include<iostream>

using namespace std;

class Animal{
    public:
	virtual void makeSound() = 0;
	virtual ~Animal(){}
};

class Dog : public Animal{
    public:
	void makeSound(){
		cout << "Bow Bow" << endl;
	}
};

class Cat : public Animal{
    public:
	void makeSound(){
		cout << "Meow Meow" << endl;
	}
};

class AnimalFactory{
    public:
	static Animal* createAnimal(int animalType){
		switch(animalType){
			case 1:
				return new Dog();
			case 2:
				return new Cat();
			default:
				return nullptr;
		}
	}
};

int main(){
	Animal* dog = AnimalFactory::createAnimal(1);
	dog->makeSound();
	delete dog;
	
	Animal* cat = AnimalFactory::createAnimal(2);
	cat->makeSound();
	delete cat;
}