#include <iostream>
#include <vector>
using namespace std;

// This function merges two sorted parts of the array
void merge(vector<int>& toys, int left, int mid, int right) {
    vector<int> temp;  // Temporary array to store merged toys
    int i = left;      // Starting point for left half
    int j = mid + 1;   // Starting point for right half

    // Compare elements from both halves and put the smaller one in temp
    while (i <= mid && j <= right) {
        if (toys[i] <= toys[j]) {
            temp.push_back(toys[i]);
            i++;
        } else {
            temp.push_back(toys[j]);
            j++;
        }
    }

    // Add the remaining elements from the left half (if any)
    while (i <= mid) {
        temp.push_back(toys[i]);
        i++;
    }

    // Add the remaining elements from the right half (if any)
    while (j <= right) {
        temp.push_back(toys[j]);
        j++;
    }

    // Copy the sorted toys back into the original array
    for (int k = 0; k < temp.size(); k++) {
        toys[left + k] = temp[k];
    }
}

// This function splits the array into halves and merges them
void mergeSort(vector<int>& toys, int left, int right) {
    if (left >= right) return; // Base case: if the group has only one toy

    int mid = left + (right - left) / 2; // Find the middle point
    mergeSort(toys, left, mid);          // Sort the left half
    mergeSort(toys, mid + 1, right);     // Sort the right half
    merge(toys, left, mid, right);       // Merge the sorted halves
}

int main() {
    vector<int> toys = {3, 1, 6, 4, 2, 5};  // Our unsorted toys!
    mergeSort(toys, 0, toys.size() - 1);    // Sort them with merge sort

    // Print the sorted toys
    cout << "Sorted toys: ";
    for (int toy : toys) {
        cout << toy << " ";
    }
    cout << endl;

    return 0;
}
