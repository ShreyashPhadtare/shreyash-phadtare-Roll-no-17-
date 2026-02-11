#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalsubject;
    float marks, total = 0, Average, percentage;

    cout << "please enter the total number of subject = ";
    cin >> totalsubject;

    cout << "please enter the marks for each subject (out of 100) = ";
    for (int i = 0; i < totalsubject; i++) {
        cin >> marks;
        total = total + marks;
    }

    Average = total / totalsubject;
    percentage = (total / (totalsubject * 100)) * 100;

    cout << "\ntotal marks obtained = " << total
         << " out of " << totalsubject * 100 << endl;
    cout << "Average marks = " << Average << endl;
    cout << "marks percentage = " << percentage << "%" << endl;

    return 0;
}
