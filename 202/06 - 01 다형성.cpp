#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	void eat(void) { cout << "�Ծ�" << endl; }
	// roar�Լ��� �����Լ����̺� ���(���� ���ε�)
	virtual void roar(void) { cout << "¢��" << endl; }
	void walk(void) { cout << "�ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) override { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "�۸�" << endl; }
};

void main(void) {
	// �����Ҵ�(���ð���)
	Animal* animal = new Animal();
	animal->roar();	// ¢��
	delete animal;

	animal = new Dog();
	animal->roar();	// ����
	delete animal;

	animal = new Tiger();
	animal->roar();	// �۸�
	delete animal;
}