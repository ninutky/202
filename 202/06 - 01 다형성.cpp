#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal »ý¼º" << endl; }
	virtual ~Animal() { cout << "Animal ¼Ò¸ê" << endl; }

	virtual void eat(void) = 0;
	virtual void roar(void) = 0;
	virtual void walk(void) = 0;

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger »ý¼º" << endl; }
	virtual ~Tiger() { cout << "Tiger ¼Ò¸ê" << endl; }

	void eat(void) { cout << "È£¶ûÀÌ ÂÁÂÁ" << endl; }
	void roar(void) override { cout << "¾îÈï" << endl; }
	void walk(void) { cout << "È£¶ûÀÌ °É¾î" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog »ý¼º" << endl; }
	virtual ~Dog() { cout << "Dog ¼Ò¸ê" << endl; }

	void eat(void) { cout << "°³ ÂÁÂÁ" << endl; }
	void roar(void) override { cout << "¾îÈï" << endl; }
	void walk(void) { cout << "°³ °É¾î" << endl; }
};

void main(void) {
	// Á¤ÀûÇÒ´ç(½ºÅÃ°ø°£)
	Animal* animal = new Tiger();
	animal->eat();
	delete animal;
}