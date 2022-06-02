#include <iostream>

using namespace std;

class Point {
public:
	Point() {};
	Point(int _x, int _y);
	void print();
private:
	int mX;
	int mY;
};

int main(void) {
	Point p1(1, 2);
	p1.print();
	return 0;
}

Point::Point(int _x, int _y) : mX(_x), mY(_y) { }

void Point::print() {
	cout << "(" << mX << ", " << mY << ")" << endl;
}