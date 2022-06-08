#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
	string sName;	// �̸�

public:
	Person();
	Person(string name, int age);
	~Person();
	void hi();

protected:
	int nAge;		// ����
};

Person::Person()
{
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) 
{
	/*
	sName = name;
	nAge = age;
	*/
}

Person::~Person()
{
}

void Person::hi() {
	cout << "�̸�: " << sName << endl;
	cout << "����: " << nAge << endl;
}

class Student : private Person
{
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();

private:
	int nHakbun;	// �й�
};

Student::Student() : Person()
{
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun) : Person(name, age), nHakbun(hakbun)
{
}

void Student :: study() {
	hi();
	nAge = 0;
	cout << nAge << endl;
}

int main(void) {
	Person* person = new Person("�ڳ���", 18);	// ����. ȭ��ǥ
	person->hi();

	Student student;		// ����. .(dot)
	student.study();
	student.hi();

}