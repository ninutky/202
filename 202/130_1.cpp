#include <iostream>
#include <string.h> 

using namespace std;

class CPerson {
private :
	string name;
	int age;

public :
	CPerson();
	CPerson(string name, int age);
};

int main() {
	CPerson cp = CPerson("ȫ�浿", 33);

	return 0;
}