#include <iostream>
#include <string>

using namespace std;

class Champ {
public:
    Champ(int age, const string& name);
    static int getCount(void);

private:
    int mAge;
    string mName;
    static int mCount;
};

int Champ::mCount = 0;

int main(void)
{
    //��ü ���̵� static ����Լ� ȣ�Ⱑ��
    cout << Champ::getCount() << endl;

    Champ* teemo = new Champ(15, "Ƽ��");
    Champ* masteryi = new Champ(20, "����");
    Champ* veign = new Champ(24, "����");

    // mCount�� ��ü�� �����Ǿ� �� 3�� ����
    cout << Champ::getCount() << endl;
    cout << teemo->getCount() << endl;
}

Champ::Champ(int age, const string& name)
    : mAge(age), mName(name)
{
    mCount++;
}
int Champ::getCount(void)
{
    // �Ϲ� ��������� static ����Լ��� ������ �� ����.
    //mAge = 10;
    return mCount;
}