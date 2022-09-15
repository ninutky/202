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
		cout << "이름: " << name << endl;
		cout << "체력: " << hp << endl;
		cout << "공격: " << attack << endl;
		cout << "방어: " << defense << endl;
	}

};

int main(void) {
	Character<string, int>* p1 = new Character<string, int>("p1", 100, 10, 10);
	p1->show();
	delete p1;
	return 0;
}
