#include <string>
#include <iostream>

using namespace std;

enum Food {
	KOREAN,	// �ѽ�(0)
	JAPANESE,	// �Ͻ�(1)
	CHINESE,	// �߽�(2)
};

int main(void) {
	string food_spot[3];

	food_spot[Food::KOREAN] = "�����";
	food_spot[Food::JAPANESE] = "��Ű�丮��";
	food_spot[Food::CHINESE] = "��ȭ��";

	cout << "�޴� ����" << endl;
	int menu = 1;

	switch (menu) {
	case Food::KOREAN:
		cout << "�ѽ�: ";
		break;
	case Food::JAPANESE:
		cout << "�߽�: ";
		break;
	case Food::CHINESE:
		cout << "�Ͻ�: ";
		break;
	default:
		break;
	}
	cout << food_spot[menu];
	return 0;
}