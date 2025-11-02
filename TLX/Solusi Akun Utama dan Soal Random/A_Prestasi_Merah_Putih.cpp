#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    vector <ll> a(n);

    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int x;cin >> x;
    auto hi = find(a.begin(),a.end(),x);
    cout << distance(a.begin(),hi)+1;

}