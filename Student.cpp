#include <iostream>
using namespace std;
class Student {

public:

int marks1, marks2;
Student() {
marks1 = 60;
marks2 = 70;
}
void display() {
cout << "Total Marks = " << marks1 + marks2 << endl;
}
virtual void show() {
cout << "Student" << endl;
}
};
class Result : public Student {

public:

void show() {
cout << "Result Calculated" << endl;
}
};

template <typename T>
T sub(T a, T b) {
return a- b;
}

int main() {
Student s;
s.display();
Result r;
Student *ptr = &r;
ptr->show();
cout << "Sub: " << sub(10, 4) << endl;
return 0;
}