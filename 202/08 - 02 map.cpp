#include <iostream>
#include <string>
#include <map>

using namespace std;

// ���: ����
// ����Ź: �����
// ���»���: �̵���
// ���: ���γ�

// arr["���"] = "����"
// arr["���»���"] = "�̵���"

//key�� ���� ���� �������� ���� ����

int main(void) {
	// map<key�ڷ���, value�ڷ���>
	map<string, string> m;
	m.insert(pair<string, string>("���", "����"));
	m.insert(pair<string, string>("����Ź", "�����"));
	m.insert(pair<string, string>("���»���", "�̵���"));
	m.insert(pair<string, string>("���", "���γ�"));

	map<string, string>::iterator iter;

	// ������ ���ҵ��� ���
	// ������ ������ key�� �ڵ����ĵ�
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "�� " << iter->second << "��" << endl;
	}
	cout << endl;

	map<string, string>::iterator actor = m.find("���");

	// key�� �����ϴ��� üũ
	if(actor != m.end())
	cout << "���ΰ��� " << actor->second << endl;

	return 0;
}