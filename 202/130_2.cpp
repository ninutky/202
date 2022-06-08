#include <string.h>
#include <iostream>

using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;

public :
	// 생성자
	CBank() { }
	CBank(string name, int account, int balance) {
		this->name = name;
		this->account = account;
		this->balance = balance;
	}

	// 입금되는 금액을 출력하는 함수
	void deposit(int balance) {

	}
};

int main(void) {

	return 0;
}