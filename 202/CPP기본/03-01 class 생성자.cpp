#include <iostream>
#include <string.h> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(void);
	Student(int Hakbun, const char* Name);   //const ������ ������
	Student(const Student& rhs);

	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();

	void show(void);
};

int main(void) {
	Student stu1 = Student(1111, "JWP");
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name) {
	// ��ü ������ ���ÿ� ������� �ʱ�ȭ   // �������(�Ű�����)
	// const/������ ��������� ����� �� �ִ�.
	nHakbun = Hakbun;
	cout << "�Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;   // �������� ����
	sName = new char[len];
	strcpy(sName, Name);
};

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "��������� ȣ��" << endl;
};

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;;
}

