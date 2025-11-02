#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;cin >> n >> q;
    map <string , int> wartel;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        int y;
        cin >> y;
        wartel.insert({x,y});
    }
    vector <string> kawan;
    for (int i = 0; i < q; i++) {
        string x; cin >> x;
        kawan.push_back(x);
    }
    for (auto x:kawan){
        auto it = wartel.find(x);
        cout << it->second << endl;
    }
    return 0;
}