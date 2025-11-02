#include <bits/stdc++.h>
using namespace std;
void f(vector <int> &a,int n){
    double x = 0.0;
    
    for (int j = 0; j < 200; j++) {
        double current_val = x;
        for (int i = n-1; i >= 0; i--) {
        (current_val == 0)?current_val = a[i]:current_val = a[i] + 1 / current_val;
    }
    x = current_val;
    }
    cout << fixed << setprecision(6) << x << endl; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin >> t;
    while(t--){
        vector <int> a;
        int n;cin >> n;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        f(a,n);
    }

    return 0;
}