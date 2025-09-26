#include <bits/stdc++.h>
using namespace std;

void BubSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Mencetak array yang sudah diurutkan
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {6, 5, 8, 9, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Menghitung ukuran array
    
    BubSort(arr, n);

    return 0;
}