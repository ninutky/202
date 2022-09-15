#include <string>
#include <iostream>

using namespace std;

template <typename S, typename I>
class Character {
private:
	S name;
	I hp;
	I attack;
	I defense;

public:
	Character(S _name, I _hp, I _attack, I _defense) :
		name(_name), hp(_hp), attack(_attack), defense(_defense) {}

	void show(void) {
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << hp << endl;
		cout << "����: " << attack << endl;
		cout << "���: " << defense << endl;
	}

};

int main(void) {
	Character<string, int>* p1 = new Character<string, int>("p1", 100, 10, 10);
	p1->show();
	delete p1;
	return 0;
}
