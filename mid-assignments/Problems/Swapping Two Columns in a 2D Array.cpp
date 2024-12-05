#include <iostream>
using namespace std;

const int MAX_ROWS = 100;  // Maximum number of rows
const int MAX_COLS = 100;  // Maximum number of columns

void swapColumns(int arr[MAX_ROWS][MAX_COLS], int m, int n, int col1, int col2) {
    for (int i = 0; i < m; i++) {
        // Swap elements in the two specified columns
        int temp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = temp;
    }
}

int main() {
    int m, n;
    
    cin >> m >> n;

    // Declare the 2D array
    int arr[MAX_ROWS][MAX_COLS];

    // Input the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int col1, col2;
    cin >> col1 >> col2;

    // Swap the specified columns
    swapColumns(arr, m, n, col1, col2);

    // Output the modified array
    cout << "Array after swapping columns " << col1 << " and " << col2 << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
