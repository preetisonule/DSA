// Solved

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int N = 8;
    int arr[N] = {4, 3, 2, 7, 8, 2, 3, 1}; 

    // Sort the array in ascending order
    sort(arr, arr + N);

    cout << "Sorted Array: " << endl;
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find all duplicates and store in vector v
    vector<int> v;
    for(int i = 1; i < N; i++) {
        if(arr[i] == arr[i-1] && (v.empty() || v.back() != arr[i])) {
            v.push_back(arr[i]);
        }
    }

    cout << "Duplicates: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}