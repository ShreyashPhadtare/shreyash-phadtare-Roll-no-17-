#include <iostream>
using namespace std;

class myclass {
public:
    void mymethod() {
        cout << "Hello world";
    }
};

int main() {
    myclass myobj;
    myobj.mymethod();
    return 0;
}
