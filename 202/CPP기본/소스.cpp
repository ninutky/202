#include <iostream>
#include <string.h>

using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age);
	~Person();
	void hi();

private:
	string sName;	// 이름
	int nAge;		// 나이
};

Person::Person()
{
	sName = "익명";
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
	cout << "이름: " << sName << endl;
	cout << "나이: " << nAge << endl;
}

class Student : public Person
{
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();

private:
	int nHakbun;	// 학번
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
	cout << "" << endl;
}

int main(void) {
	Person* person = new Person("박나경", 18);	// 동적. 화살표
	person->hi();
	Student student;
	student.study();
}