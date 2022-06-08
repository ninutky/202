#include <iostream>

using namespace std;

class Point {
public:
	// ������
	Point(int _x, int _y);
	Point(void);

	// ������ �����ε�
	Point operator+(const Point& rhs) {
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;

		return p;
	}

	void print();

private:
	int mX;
	int mY;
};