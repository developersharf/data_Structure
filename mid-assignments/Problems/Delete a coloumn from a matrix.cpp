#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    // Declare the original matrix
    int arr[m][n];

    // Input the matrix
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Specify the column to delete
    int colToDelete;
    cout << "Enter the column index to delete (0 to " << n - 1 << "): ";
    cin >> colToDelete;

    // Check for valid column index
    if (colToDelete < 0 || colToDelete >= n) {
        cout << "Invalid column index!" << endl;
        return 1;
    }

    // Create a new matrix with one less column
    int newArr[m][n - 1];

    // Copy elements to the new matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0, newJ = 0; j < n; j++) {
            if (j != colToDelete) {
                newArr[i][newJ] = arr[i][j];
                newJ++;  // Increment new column index only if we're not skipping the column
            }
        }
    }

    // Output the new matrix
    cout << "New matrix after deleting column " << colToDelete << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
