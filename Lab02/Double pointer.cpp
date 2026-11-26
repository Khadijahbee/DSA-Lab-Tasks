#include <iostream>
using namespace std;

int main()
{
    int num = 25;

    int *ptr = &num;
    int **pp = &ptr;

    cout << "Original value: " << num << endl;

    **pp = 100;

    cout << "Modified value: " << num << endl;

    return 0;
}
