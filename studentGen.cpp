#include <iostream>
using namespace std;

void swapValues(float &number1, float &number2)
{
    float temp = number1;
    number1 = number2;
    number2 = temp;
}

int main()
{
    float first, second;

    cout << "Enter the first number then hit enter:" << endl;
    cin >> first;

    cout << "\nEnter the second number then hit enter:" << endl;
    cin >> second;

    cout << "\nYou input the numbers as " << first << " and " << second << "." << endl
         << endl;

    swapValues(first, second);

    cout << "After swapping, the first number has the value of " << first
         << " which was the value of the second number." << endl;
    cout << "The second number has the value of " << second
         << " which was the value of the first number." << endl;

    return 0;
}