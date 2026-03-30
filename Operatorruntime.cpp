#include<iostream>
using namespace std;
class A
{
    public:
    void funC(){
        cout<<"I am in class A";
     }
};
class B{
    public:
    void funC(){
        cout<<"\nI am in class B";

    }
};
class C : public A, public B{

};
int main(){
    C obj;
obj.A::funC();
obj.B::funC();
return 0;
}