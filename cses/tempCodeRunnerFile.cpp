#include <bits/stdc++.h>
using namespace std;

void solve(string dna) {
    int a = 0,c = 0,g = 0,t = 0;
    for (auto x : dna) {
        if (x == 'A') a++;
        if (x == 'C') c++;
        if (x == 'G') g++;
        if (x == 'T') t++;
    }
    vector <int> d;
    d.push_back(a);
    d.push_back(c);
    d.push_back(g);
    d.push_back(t);
    cout << max_element(d);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string dna;cin >> dna;
    solve(dna);
    return 0;
}