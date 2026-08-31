#include <iostream>
using namespace std;

void print2Darr(int arr[][3], int rowsize, int colsize)
{
    // Input
    for (int row_ind=0;row_ind<rowsize; row_ind++)
    {
        for (int col_ind =0;col_ind<colsize; col_ind++)
        {
            cout << "Enter input ["<<row_ind<< "]["<< col_ind<<"]: ";
            cin >> arr[row_ind][col_ind];
        }
    }
    cout << "\nArray is:\n";

    // Print
    for (int row_ind = 0; row_ind < rowsize; row_ind++)
    {
        for (int col_ind = 0; col_ind < colsize; col_ind++)
        {
            cout << arr[row_ind][col_ind] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[2][3];
    int row = 2;
    int col = 3;

    print2Darr(arr, row, col);

    return 0;
}