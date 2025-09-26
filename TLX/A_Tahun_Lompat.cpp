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
    int n,a,b,c; cin >> n >> a >> b >> c;
    ((n % a == 0 && n % b != 0) || (n % c == 0))?cout << "YES\n":cout << "NO\n";
}