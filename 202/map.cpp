#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	// map<key�ڷ���, value�ڷ���>
	map<int, string> m;
	m[4] = "���¿�";
	m[5] = "���ϴ�";
	m[6] = "��ä��";
	m[7] = "�ڳ���";

	map<int, string>::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "��ȣ: " <<iter->first << endl << "�̸�: " << iter->second <<  endl << endl;
	}
	cout << endl;

	m.erase(7);

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "��ȣ: " << iter->first << endl << "�̸�: " << iter->second << endl << endl;
	}
	cout << endl;

	return 0;
}