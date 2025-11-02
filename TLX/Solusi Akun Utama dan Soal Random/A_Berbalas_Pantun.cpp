#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fast_expo(ll a,ll b){
    if (b == 0) return 1;
    ll res = fast_expo(a,b/2);
    if(b % 2) return res * res * a;
    else return res * res;
}
int  main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    ll a[n];
    ll b[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    ll sum = 0;
    for(int i = 0;i < n;i++){
       

    }
    (sum % 2 == 0)?cout << 0 << '\n':cout << 1 << '\n';
}