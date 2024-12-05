#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    // The sentence to print
    string sentence = "Ei Matha-Mota-Rogchota joddin achhe, non-profit diye kon ghaash ta katbo!";

    // Print the sentence T times
    for (int i = 0; i < T; i++) {
        cout << sentence << endl;
    }

    return 0;
}
