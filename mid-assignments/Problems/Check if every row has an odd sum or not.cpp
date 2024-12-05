#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    
    cin >> m >> n;

    // Declare a 2D array
    int arr[m][n];

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }



    // Check if every row has an odd sum
    bool allOddSums = true;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        // Check if the row sum is even
        if (rowSum % 2 == 0) {
            allOddSums = false;
            break;  // No need to check further if we find an even sum
        }
    }


    // Output result
    if (allOddSums) {
        cout << "Yes, every row has an odd sum." << endl;
    } else {
        cout << "No, not every row has an odd sum." << endl;
    }

    return 0;
}
