#include <iostream>
using namespace std;
class Electricity {

public:

int units, rate;
Electricity() {
units = 100;
rate = 5;
}
void display() {
cout << "Total Bill = " << units * rate << endl;
}
virtual void show() {
cout << "Electricity Bill" << endl;
}
};

class Domestic : public Electricity {
public:
void show() {
cout << "Domestic Bill" << endl;
}
};

template <typename T>
T add(T a, T b) {
return a + b;
}
int main() {
Electricity e;
e.display();
Domestic d;
Electricity *ptr = &d;
ptr->show();
cout << "Add: " << add(5, 3) << endl;

return 0;
}