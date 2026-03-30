#include<iostream>
using namespace std;

class comp {
public:   // <-- Add this

    void add(int a, int b) {
        cout << "integer sum = " << a + b << endl;
    }

    void add(double a, double b) {
        cout << "float sum = " << a + b << endl;
    }
};

int main() {
    comp Z;
    Z.add(10, 2);
    Z.add(5.3, 6.2);
    return 0;
}