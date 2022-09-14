#include <string>
#include <iostream>

using namespace std;

class Character {
private:
	char* name;
	int hp;
	int attack;
	int defense;

public:
	Character(void);
	Character(const char* _name, int _hp, int _attack, int _defense) :
		hp(_hp), attack(_attack), defense(_defense) {
		int len = strlen(_name) + 1;
		name = new char[len];
		strcpy(name, _name);
	};

	void show(void) {
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << hp << endl;
		cout << "����: " << attack << endl;
		cout << "���: " << defense << endl;
	}

	~Character() {
		delete[]name;
	}

};

int main(void) {
	Character* a = new Character("a", 100, 10, 10);
	a->show();
	return 0;
}
