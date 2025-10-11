#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector <long long> array;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        array.push_back(x);
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i - 1; j++) {
            if(array[j] < array[j + 1]){
                swap(array[j-1],array[j]);
                cnt = array[j+1];
            }
        }
    }
    cout << cnt;
    
    return 0;
}