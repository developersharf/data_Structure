#include <iostream>
using namespace std;

const int MAX_ROWS = 100; // Define maximum rows
const int MAX_COLS = 100; // Define maximum columns

int main() {
    int m, n; // Number of rows and columns
    
    cin >> m >> n;

    // Declare a 2D array with fixed maximum size
    int arr[MAX_ROWS][MAX_COLS];

    // Input the matrix elements
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the mirror (horizontally flipped) array
    cout << "2D Mirror Array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) { // Loop from last column to first
            cout << arr[i][j] << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
