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

int main(void) {
	Person* person = new Person("박나경", 18);
	person->hi();

}