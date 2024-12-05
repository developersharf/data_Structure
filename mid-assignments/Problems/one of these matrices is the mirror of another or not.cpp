#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Define maximum size for the matrices

// Function to check if two matrices are mirror images
bool areMirrorImages(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int m, int n) {
    // Check each row
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Compare with the corresponding element in the mirrored position
            if (matrix1[i][j] != matrix2[i][n - j - 1]) {
                return false; // If any element does not match, they are not mirrors
            }
        }
    }
    return true; // All elements matched
}

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];
    int m, n;

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Check if matrix1 is the mirror image of matrix2
    if (areMirrorImages(matrix1, matrix2, m, n)) {
        cout << "Matrix 1 is a mirror image of Matrix 2." << endl;
    } else {
        cout << "Matrix 1 is NOT a mirror image of Matrix 2." << endl;
    }

    return 0;
}
