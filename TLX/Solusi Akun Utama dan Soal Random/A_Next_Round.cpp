#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin >> n >> k;
    int a[n],cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    for (int i = 0; i < n; i++) {
        if(a[i] >= a[k-1] && a[i] > 0)cnt++;
    }
    (a[k-1] > 0 && n >= k-)?cout << cnt << endl:cout << 0 << endl;
    return 0;
}