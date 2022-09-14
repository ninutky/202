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
		cout << "이름: " << name << endl;
		cout << "체력: " << hp << endl;
		cout << "공격: " << attack << endl;
		cout << "방어: " << defense << endl;
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
