#include <iostream>
using namespace std;

const int MOD = 998244353;

// Function for modular exponentiation
long long mod_pow(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        long long N, M, K;
        cin >> N >> M >> K;

        // Calculate the number of cells
        long long cells = N * M;

        // Calculate the number of valid colorings modulo MOD
        long long result;
        if (N % 2 == 0 || M % 2 == 0) {
            // If either dimension is even, the grid can be fully colored in `K^(N*M/2) % MOD` ways
            result = mod_pow(K, cells, MOD);
        } else {
            // If both dimensions are odd, we consider K * (K-1)^(N*M/2) % MOD
            result = (K * mod_pow(K - 1, cells - 1, MOD)) % MOD;
        }

        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
