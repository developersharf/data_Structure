#include <iostream>
using namespace std;

const int MAX_M = 100;  // Maximum rows
const int MAX_N = 100;  // Maximum columns

void swapRows(int arr[MAX_M][MAX_N], int row1, int row2, int n) {
    // Temporary array to hold one row
    int temp[MAX_N];

    // Swap rows
    for (int j = 0; j < n; j++) {
        temp[j] = arr[row1][j];    // Copy row1 to temp
        arr[row1][j] = arr[row2][j]; // Copy row2 to row1
        arr[row2][j] = temp[j];    // Copy temp to row2
    }
}

int main() {
    int m, n;

   
    cin >> m >> n;

    // Ensure within limits
    if (m > MAX_M || n > MAX_N) {
        cout << "Matrix dimensions exceed maximum allowed!" << endl;
        return 1;
    }

    int arr[MAX_M][MAX_N];

    // Input the matrix
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the original matrix
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Input the rows to be swapped
    int row1, row2;
    
    cin >> row1 >> row2;

    // Ensure valid row indices
    if (row1 >= 0 && row1 < m && row2 >= 0 && row2 < m) {
        // Swap the rows
        swapRows(arr, row1, row2, n);

        // Print the matrix after swapping
        cout << "Matrix after swapping rows " << row1 << " and " << row2 << ":" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid row indices!" << endl;
    }

    return 0;
}
