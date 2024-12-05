#include <iostream>
using namespace std;

const int SIZE = 3; // You can change this to any size for a square matrix

void printMatrix(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void swapDiagonals(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        // Swap elements of the primary and secondary diagonals
        swap(arr[i][i], arr[i][SIZE - 1 - i]);
    }
}

int main() {
    int arr[SIZE][SIZE];

    // Input the matrix
    cout << "Enter elements of the matrix (" << SIZE << "x" << SIZE << "):" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    printMatrix(arr);

    // Swap the diagonals
    swapDiagonals(arr);

    cout << "\nMatrix After Swapping Diagonals:" << endl;
    printMatrix(arr);

    return 0;
}
