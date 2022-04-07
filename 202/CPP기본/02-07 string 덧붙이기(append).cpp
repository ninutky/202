// cout, endl 객체를 가지고 있음
#include <iostream>
// printf()를 가지고 있음
#include <stdio.h>
// strcpy를 가지고 있음
#include <string.h>

// std:: 안 써도 됨
using namespace std;

int main() {
	char cMunja[20];
	strcpy(cMunja, "c_insert");	// c_insert
	strcat(cMunja, "++");		// c_insert++
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";	// cpp_insert
	cppMunja = cppMunja + "++";	// cpp_insert++
	cout << cppMunja << endl;
	return 0;
}