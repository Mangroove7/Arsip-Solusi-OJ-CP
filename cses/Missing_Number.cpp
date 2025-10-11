#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;cin >> n;
    vector <bool> cek(n,false);
    
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        cek[x-1] = true;
    }
    for (int i = 0; i < n; i++) {
        if(cek[i] == false){
            cout << i+1 << "\n";
            break;
        }
    }

    return 0;
}