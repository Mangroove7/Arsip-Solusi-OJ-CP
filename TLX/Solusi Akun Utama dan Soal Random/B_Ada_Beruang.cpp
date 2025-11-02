#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,d;cin >> n >> d;
    vector <int> a(n);
    vector <int> t(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] - d < 0) continue;
        else t[i] = a[i] - d;
    }
    for (int i = 0; i < n; i++) {
        if(binarySearch(a,0,a.size(),t[i]) != -1)cnt++;
    }
    cout << cnt << endl;
    return 0;
}