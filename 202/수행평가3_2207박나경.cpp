#include <iostream>
#include <cstring>

using namespace std;

class m_string {
private:
	char* _Myptr;
	int _Mysize;

public:
	// 문자열의 글자수를 반환
	int size() const {
		return _Mysize-1;
	}

	m_string() {
		_Mysize = 0;
		_Myptr = NULL;
	}

	m_string(const char* ms) {
		_Mysize = strlen(ms) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, ms);
	}

	m_string(const m_string& ms) {
		_Mysize = ms._Mysize;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, ms._Myptr);
	}

	~m_string() {
		if (_Myptr != NULL) delete[]_Myptr;
	}

	m_string& operator= (const m_string& ms) {
		if (_Myptr != NULL)
			delete[]_Myptr;
		_Mysize = ms._Mysize;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, ms._Myptr);
		return *this;
	}

	m_string& operator+= (const m_string& ms)
	{
		char* temp = new char[_Mysize + ms._Mysize - 1];
		strcpy(temp, _Myptr);
		strcat(temp, ms._Myptr);

		if (_Myptr != NULL)
			delete[]_Myptr;
		_Myptr = temp;
		return *this;
	}

	int operator== (const m_string& ms)
	{
		if (strcmp(_Myptr, ms._Myptr) == 0)
		{
			return 0;
		}
		else {
			return -1;
		}
	}

	m_string operator+ (const m_string& ms)
	{
		char* temp = new char[_Mysize + ms._Mysize - 1];
		strcpy(temp, _Myptr);
		strcat(temp, ms._Myptr);

		m_string result(temp);
		delete[]temp;

		return result;
	}

	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}
	friend istream& operator>>(istream& is, m_string& ms) {
		char str[100];
		is >> str;
		ms = m_string(str);
		return is;
	}
};


int main(void)
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}
