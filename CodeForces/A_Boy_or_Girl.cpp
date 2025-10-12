#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    set <char> gendercheck;
    string n;cin >> n;
    for (int i = 0; i < n.size(); i++) {
        gendercheck.insert(n[i]);
    }
    if (gendercheck.size() % 2 == 0){
        cout << "CHAT WITH HER!\n";
    }
    else{
        cout << "IGNORE HIM!\n";
    }
}