#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	void eat();
	void sleep();

private:
	string name;
	int age;
};

class Student : public Person
{
public:
	void study();

private:
	string hakbun;
	string school;
};

class Teacher : public Person
{
public:
	void teach();
	void admonition(); // ÈÆ°è

private:
	string sub;
};