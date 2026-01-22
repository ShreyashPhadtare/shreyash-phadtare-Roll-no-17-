#include <iostream>
#include <string>
using namespace std;

int main() {
    int billNo;
    string customername;
    string particulars;
    float amount, GST, finalbill;

    cout << "Enter the bill number: ";
    cin >> billNo;

    cin.ignore();

    cout << "Enter the customer name: ";
    getline(cin, customername);

    cout << "Enter the particulars: ";
    getline(cin, particulars);

    cout << "Enter the amount: ";
    cin >> amount;

    cout << "Enter the GST: ";
    cin >> GST;

    finalbill = amount + GST;

    return 0;
}
