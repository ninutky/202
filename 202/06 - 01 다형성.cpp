#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	void eat(void) { cout << "¸Ô¾î" << endl; }
	// roarÇÔ¼ö¸¦ °¡»óÇÔ¼öÅ×ÀÌºí¿¡ µî·Ï(µ¿Àû ¹ÙÀÎµù)
	virtual void roar(void) { cout << "Â¢¾î" << endl; }
	void walk(void) { cout << "°É¾î" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) override { cout << "¾îÈï" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "¸Û¸Û" << endl; }
};

void main(void) {
	// Á¤ÀûÇÒ´ç(½ºÅÃ°ø°£)
	Animal* animal = new Animal();
	animal->roar();	// Â¢¾î
	delete animal;

	animal = new Dog();
	animal->roar();	// ¾îÈï
	delete animal;

	animal = new Tiger();
	animal->roar();	// ¸Û¸Û
	delete animal;
}