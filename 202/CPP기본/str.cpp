#include <iostream>
using namespace std;

int main() {
	char* sce = nullptr;
	char dest[] = "same";
	sce = dest;
	sce[0] = 'game';

	cout << sce;
}