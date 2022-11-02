#include <iostream>

using namespace std;

int main(void) {
	int arr[] = { 10, 20, 30, 40 };

	for (int x : arr)
		cout << arr[x] << endl;

	return 0;
}
