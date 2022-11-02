#include <string>
#include <iostream>

using namespace std;

enum Color {
	RED,
	PINK,
	BLACK,
	COUNT	//ÃÑ °³¼ö
};

int main(void) {
	string color_list[Color::COUNT];

	color_list[Color::RED] = "»¡°£»ö";
	color_list[Color::PINK] = "ºÐÈ«»ö";
	color_list[Color::BLACK] = "°ËÀº»ö";

	cout << "»ö±ò ¼±ÅÃ" << endl;
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