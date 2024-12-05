#include <bits/stdc++.h>
using namespace std;

const int MAX_M = 100;
const int MAX_N = 100;  

int main() {
    int m, n;
    cin >> m >> n;

    if (m > MAX_M || n > MAX_N) {
        cout << "Matrix dimensions are too large!" << endl;
        return 1;
    }

    
    int arr[MAX_M][MAX_N];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

  
    for (int j = 0; j < n; j++) {  
        
        for (int i = 0; i < m; i++) {  
            cout << arr[i][j] << " ";  
        
        }
        cout << endl;
    }

    return 0;
}
