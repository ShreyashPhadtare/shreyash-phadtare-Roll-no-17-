#include <iostream>
using namespace std;

template <typename T>T mymax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "max of 3 & 7 is: " << mymax<int>(3, 7) << endl;
    cout << "max of 3.5 & 7.5 is: " << mymax<double>(3.5, 7.5) << endl;
    cout << "max of g & e is: " << mymax<char>('g', 'e') << endl;
    return 0;
}