#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int even = 0, odd = 0;
    int *ptr = arr;

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}
