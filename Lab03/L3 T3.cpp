#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Allocate memory for rows
    int **arr = new int*[rows];

    // Allocate memory for columns
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // Input elements
    cout << "Enter matrix elements: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Display matrix
    cout << "\nMatrix:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Free memory of each row
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    // Free memory of row pointers
    delete[] arr;

    return 0;
}
