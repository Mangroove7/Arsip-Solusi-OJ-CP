#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    ll factor,x;
    ll grid;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factor = i;
        } 
    }
        x = n / factor;
        grid = (factor - 1) + (x - 1);

   cout << grid;
    

    return 0;
} 