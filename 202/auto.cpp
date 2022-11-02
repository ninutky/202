#include <string>

using namespace std;

class Champ
{
public:
    Champ(int age, const string& name);
private:
    static int mCount;
};

int Champ::mCount = 0;
Champ::Champ(int age, const string& name)
{
    ++mCount;
}


void main(void)
{
    Champ* myCat = new Champ(2, "Ƽ��");
    Champ* yourCat = new Champ(5, "����");
    Champ* hisCat = new Champ(3, "����");
}
