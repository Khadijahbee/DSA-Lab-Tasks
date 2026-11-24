#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Zeros: " << zero << endl;

    return 0;
}
