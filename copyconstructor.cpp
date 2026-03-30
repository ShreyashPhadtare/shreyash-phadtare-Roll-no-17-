#include <iostream>
using namespace std;

class copytest
{
public:
    int x;
    copytest(int a)
    {
        x = a;
    }
    copytest(copytest &i)
    {
        x = i.x;
    }
};

int main()
{
    copytest a1(20);
    copytest a2(a1); 
    cout << a2.x;
    return 0;
}