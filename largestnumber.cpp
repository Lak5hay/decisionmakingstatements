//lakshay tanwar 23070123079
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three integers:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    int largest;

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }
    cout << "The largest number is: " << largest << endl;

    return 0;
}
/*
Enter three integers:
Number 1: 5
Number 2: 5
Number 3: 7
The largest number is: 7
*/
