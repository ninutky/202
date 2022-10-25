#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v;
	int input, tot = 0;
	double avg;

	vector<int>::iterator iter;
	// 데이터 5개 입력받음
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 데이터 입력: ";
		cin >> input;
		v.push_back(input);
		tot += input;
	}
	avg = tot / 5;
	cout << endl;

	// 데이터 출력
	cout << "데이터: ";
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "	";
	}
	cout << endl;

	cout << "합계: " << tot << endl;
	cout << "평균: " << avg;

	return 0;
}