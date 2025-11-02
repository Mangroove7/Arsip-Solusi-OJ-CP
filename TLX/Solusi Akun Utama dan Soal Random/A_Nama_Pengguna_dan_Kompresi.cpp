#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;string s;cin >> n >> s;
    auto p = unique(s.begin(),s.end()); 
    s.erase(p, s.end());
    cout << s << '\n';
    return 0;
}