#include <string.h>
#include <iostream>

using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;

public :
	// ������
	CBank() { }
	CBank(string name, int account, int balance) {
		this->name = name;
		this->account = account;
		this->balance = balance;
	}

	// �ԱݵǴ� �ݾ��� ����ϴ� �Լ�
	void deposit(int balance) {

	}
};

int main(void) {

	return 0;
}