#include <iostream>
using namespace std;
class box
{
    private:
      int lenght;
    public:
    box():lenght(0){}
    friend int printlenght (box);
};
int printlenght(box b)
{
    b.lenght+=10;
    return b.lenght;
}
int main(){
    box b;
    cout<<"lenght of box:" <<printlenght(b);
    return 0;
}