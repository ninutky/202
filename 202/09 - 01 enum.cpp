#include <string>
#include <iostream>

using namespace std;

int main(void) {
	string food_spot[3];

	food_spot[0] = "�����";
	food_spot[1] = "��Ű�丮��";
	food_spot[2] = "��ȭ��";

	cout << "�޴� ����" << endl;
	int menu = 1;

	switch (menu) {
	case 0:
		cout << "�ѽ�: ";
		break;
	case 1:
		cout << "�߽�: ";
		break;
	case 2:
		cout << "�Ͻ�: ";
		break;
	default:
		break;
	}
	cout << food_spot[menu];
	return 0;
}