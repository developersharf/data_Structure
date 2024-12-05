#include <iostream>
using namespace std;

const int MAX_M = 100; // Maximum rows
const int MAX_N = 100; // Maximum columns

void printMatrix(int arr[MAX_M][MAX_N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    // Ensure dimensions do not exceed the maximum
    if (m > MAX_M || n > MAX_N) {
        cout << "Matrix dimensions are too large!" << endl;
        return 1;
    }

    int arr[MAX_M][MAX_N];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(arr, m, n);

    int rowToDelete;
    cout << "Enter the row number to delete (0-based index): ";
    cin >> rowToDelete;

    if (rowToDelete < 0 || rowToDelete >= m) {
        cout << "Invalid row number!" << endl;
        return 1;
    }

    // Create a new matrix to store the result
    int newArr[MAX_M][MAX_N];
    int newM = m - 1; // New number of rows

    // Copy all rows except the one to delete
    for (int i = 0, newRow = 0; i < m; i++) {
        if (i != rowToDelete) { // Skip the row to delete
            for (int j = 0; j < n; j++) {
                newArr[newRow][j] = arr[i][j];
            }
            newRow++; // Increment new row index
        }
    }

    cout << "Matrix after deleting row " << rowToDelete << ":" << endl;
    printMatrix(newArr, newM, n);

    return 0;
}
