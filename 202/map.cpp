#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	// map<key자료형, value자료형>
	map<int, string> m;
	m[4] = "김태연";
	m[5] = "김하늘";
	m[6] = "문채영";
	m[7] = "박나경";

	map<int, string>::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "번호: " <<iter->first << endl << "이름: " << iter->second <<  endl << endl;
	}
	cout << endl;

	m.erase(7);

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "번호: " << iter->first << endl << "이름: " << iter->second << endl << endl;
	}
	cout << endl;

	return 0;
}