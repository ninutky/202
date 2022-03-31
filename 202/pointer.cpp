#include <iostream>
using namespace std;
int main() {
	int* po = nullptr;
	int n = 3;
	po = &n;
	*po = 4;

	int j = 10, k = 20;
	const int* const po = &j;
	*po = 30;
	po = &k;
}