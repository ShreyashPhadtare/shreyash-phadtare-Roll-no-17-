#include <iostream>
using namespace std;

class constructortest {
public:
    constructortest() {
        cout << "constructor created";
    }
};

int main() {
    constructortest object;
    return 0;
}