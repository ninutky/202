#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal() { cout << "Animal 생성" << endl; }
	~Animal() { cout << "Animal 소멸" << endl; }

	void eat(void) { cout << "먹어" << endl; }
	// roar함수를 가상함수테이블에 등록(동적 바인딩)
	virtual void roar(void) { cout << "짖어" << endl; }
	void walk(void) { cout << "걸어" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger 생성" << endl; }
	virtual ~Tiger() { cout << "Tiger 소멸" << endl; }

	void roar(void) override { cout << "어흥" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog 생성" << endl; }
	virtual ~Dog() { cout << "Dog 소멸" << endl; }

	void roar(void) override { cout << "멍멍" << endl; }
};

void main(void) {
	// 정적할당(스택공간)
	Animal* animal = new Tiger();
	delete animal;
}