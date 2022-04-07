#include <iostream>	// cout, endl 객체를 가지고 있음
#include <string>	// string 클래스를 가지고 있음

#include <stdio.h>	// printf()를 가지고 있음
#include <string.h>	// strlen()를 가지고 있음

// std:: 안 써도 됨
using namespace std;

int main() {
	char cI[10] = "aaa";
	printf("%s\n", cI);				// 문자열의 시작 주소

	string cppI = "aaa";
	printf("%s\n", cppI.c_str());	// 문자열의 시작 주소

	return 0;
}