#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(void);
	Student(int Hakbun, string Name);

	void show(void);
};

int main(void) {
	Student stu1;
	Student stu2 = Student();
	stu1.show();
	stu2.show();

	Student stu3 = { 1111, "JWP" };
	stu3.show();

	return 0;
}

Student::Student(void) {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name) {
	nHakbun = Hakbun;
	sName = Name;
	cout << "학번이 등록되었습니다." << endl;
};

void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;;
}