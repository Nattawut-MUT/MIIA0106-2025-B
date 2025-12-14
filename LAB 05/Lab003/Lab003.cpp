#include <iostream>
using namespace std;

void swapValues(int& a, int& b)   // pass by reference (C++)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a, b;

    cout << "Enter a integer: ";
    cin >> a;
    cout << "Enter b integer: ";
    cin >> b;

    cout << "Before swap:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    swapValues(a, b);

    cout << "After swap:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
