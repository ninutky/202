#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	
	// ũ�� Ȯ���� ������ �����迭
	vector<string> s3;
	s3.reserve(10);	 // ũ�⸦ 10���� Ȯ��

	for (int i = 0; i < 10; i++) {
		s3.push_back("ab");
	}

	// ���������� ũ�⸦ Ȯ���Ͽ� ����
	s3.push_back("ab");

	// ������ ���ҵ��� ���
	for (int i = 0; i < s3.size(); i++)
	{
		cout << s3[i] << " ";
	}
	cout << endl;

	// ������ ������ ����
	s3[1] = "cd";
	s3.at(2) = "ef";

	for (int i = 0; i < s3.size(); i++)
	{
		cout << s3[i] << " ";
	}
	cout << endl;

	return 0;
}