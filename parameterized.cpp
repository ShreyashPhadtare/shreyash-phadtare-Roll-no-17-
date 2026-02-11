#include <iostream>
using namespace std;

class add
{
public:
    add(int a, int b)
    {
        int c = a + b;
        cout << "sum = " << c;
    }
};

int main()
{
    add object(10, 20);
    return 0;
}