#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v;
	int input, tot = 0;
	double avg;

	vector<int>::iterator iter;
	// ������ 5�� �Է¹���
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ������ �Է�: ";
		cin >> input;
		v.push_back(input);
		tot += input;
	}
	avg = tot / 5;
	cout << endl;

	// ������ ���
	cout << "������: ";
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "	";
	}
	cout << endl;

	cout << "�հ�: " << tot << endl;
	cout << "���: " << avg;

	return 0;
}