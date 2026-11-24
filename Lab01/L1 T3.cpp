#include <iostream>
using namespace std;

int main()
{
    int num;
    int *ptr = &num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Before modification: " << num << endl;

    *ptr = 100;

    cout << "After modification: " << num << endl;

    return 0;
}
