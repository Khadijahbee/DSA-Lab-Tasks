#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
