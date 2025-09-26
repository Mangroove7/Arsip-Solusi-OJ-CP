#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    int faktor[n];
    for (int i = 0; i * i < n; i++) {
        if(i % n == 0){
            faktor[i] = i;
            cout << faktor[i];
        }
    }
    

    return 0;
}