#include <iostream>
using namespace std;

class copyTest
{
    public :
    int x;
    copyTest(int a)
    {
        x = a;
    }
    copyTest(copyTest & i)
    {
        x = i.x;
    }
};
int main() {
    copyTest a1 (30);
    copyTest a2 (20);
    cout<< a2.x;
    return 0;
}
