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
		cout << "�̸�: " << name << endl;
		cout << "�й�: " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;

	Student(string name, int hakbun, string university)
		: Person(name, hakbun), university(university) {}
};

int main(void) {
	Student st1("ȫ�浿", 2018, "�ѱ����б�");
	st1.PrintShow();

	return 0;
}