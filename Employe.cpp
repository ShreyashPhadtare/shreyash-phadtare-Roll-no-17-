#include <iostream>
using namespace std;

class bank{
public:

    virtual void  interest(){
       cout <<"bank interest" <<endl;
      }
};
class HDFC : public bank{
    public:
    void interest(){
        cout <<"HDFC interest rate : 6% " << endl;
    }
};
class BOI : public bank{
    public:
    void interest(){
        cout <<"BOI interest : 6.5% " << endl;
    }
};

int main(){
    bank *b;
    HDFC h;
    BOI I;

    b = &h;
    b->interest();

    b = &I;
    b->interest();

    return 0;
}