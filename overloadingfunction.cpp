#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived class function" << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived obj;

    basePtr = &obj;
    basePtr->display();
    return 0;
}