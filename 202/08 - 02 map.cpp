#include <iostream>
#include <string>
#include <map>

using namespace std;

// 김신: 공유
// 지은탁: 김고은
// 저승사자: 이동욱
// 써니: 유인나

// arr["김신"] = "공유"
// arr["저승사자"] = "이동욱"

//key는 실제 값을 가져오기 위한 무언가

int main(void) {
	// map<key자료형, value자료형>
	map<string, string> m;
	m["김신"] = "공유";
	m["지은탁"] = "김고은";
	m["저승사자"] = "이동욱";
	m["써니"] = "유인나";

	// 맵의 원소들을 출력
	// 삽입할 때마다 key는 자동정렬됨
	for (auto& x : m)
	{
		cout << x.first << "역 " << x.second << "분" << endl;
	}
	cout << endl;

	map<string, string>::iterator actor = m.find("김신");

	// key가 존재하는지 체크
	if(actor != m.end())
	cout << "주인공은 " << actor->second << endl;

	return 0;
}