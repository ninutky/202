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
	m["���"] = "����";
	m["����Ź"] = "�����";
	m["���»���"] = "�̵���";
	m["���"] = "���γ�";

	// ���� ���ҵ��� ���
	// ������ ������ key�� �ڵ����ĵ�
	for (auto& x : m)
	{
		cout << x.first << "�� " << x.second << "��" << endl;
	}
	cout << endl;

	map<string, string>::iterator actor = m.find("���");

	// key�� �����ϴ��� üũ
	if(actor != m.end())
	cout << "���ΰ��� " << actor->second << endl;

	return 0;
}