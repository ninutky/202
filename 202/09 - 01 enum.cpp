#include <string>
#include <iostream>

using namespace std;

int main(void) {
	string food_spot[3];

	food_spot[0] = "삼백집";
	food_spot[1] = "야키토리묵";
	food_spot[2] = "태화장";

	cout << "메뉴 선택" << endl;
	int menu = 1;

	switch (menu) {
	case 0:
		cout << "한식: ";
		break;
	case 1:
		cout << "중식: ";
		break;
	case 2:
		cout << "일식: ";
		break;
	default:
		break;
	}
	cout << food_spot[menu];
	return 0;
}