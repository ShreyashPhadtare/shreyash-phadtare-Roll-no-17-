#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    if (a < 0 || b < 0)
    throw "Negative values not allowed";
    return a * b;
}
int main() {
    try {
    cout << "Int Result: " << multiply(5, 3) << endl;
    cout << "Float result: " << multiply(2.5, 4.0) << endl;

}
catch (const char* msg) {
    cout << "Exception: " << msg << endl;
}
return 0;
}