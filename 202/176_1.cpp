#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	string name;
	int hakbun;

	Person(string name, int hakbun)
		: name(name), hakbun(hakbun) {}

	void PrintShow() {
		cout << "이름: " << name << endl;
		cout << "학번: " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;

	Student(string name, int hakbun, string university)
		: Person(name, hakbun), university(university) {}
};

int main(void) {
	Student st1("홍길동", 2018, "한국대학교");
	st1.PrintShow();

	return 0;
}