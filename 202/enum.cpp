#include <string>
#include <iostream>

using namespace std;

enum Color {
	RED,
	PINK,
	BLACK,
	COUNT	//�� ����
};

int main(void) {
	string color_list[Color::COUNT];

	color_list[Color::RED] = "������";
	color_list[Color::PINK] = "��ȫ��";
	color_list[Color::BLACK] = "������";

	cout << "���� ����" << endl;
	int c = 1;

	switch (c) {
	case Color::RED:
		cout << "RED: ";
		break;
	case Color::PINK:
		cout << "PINK: ";
		break;
	case Color::BLACK:
		cout << "BLACK: ";
		break;
	default:
		break;
	}
	cout << color_list[c];
	return 0;
}