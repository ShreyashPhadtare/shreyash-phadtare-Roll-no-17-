#include <iostream>
using namespace std;

inline int square(int a){
    return a*a;
}
inline int cube(int a){
    return a*a*a;
}
   int main(){
    cout<<"square of number:" <<square(5);
    cout<<"cube of number:" <<cube(2);
    return 0;
   }

