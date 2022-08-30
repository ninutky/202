#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	void eat(void) { cout << "¸Ô¾î" << endl; }
	void roar(void) { cout << "Â¢¾î" << endl; }
	void walk(void) { cout << "°É¾î" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) { cout << "¾îÈï" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) { cout << "¸Û¸Û" << endl; }
};

void main(void) {
	// Á¤ÀûÇÒ´ç(½ºÅÃ°ø°£)
	Animal animal;
	animal.roar();	// Â¢¾î

	Dog dog;
	dog.roar();		// ¸Û¸Û
}