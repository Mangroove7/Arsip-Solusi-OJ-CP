#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    int increm = NULL;
    int decrem = NULL;
    vector <string> intdecre(n);
    for (int i = 0; i < n; i++) {
        cin >> intdecre[i];
    }
    for (int i = 0; i < n; i++) {
        if(intdecre[i].find('+') != string::npos)increm++;
        else if(intdecre[i].find('-') != string::npos)decrem++;

    }
    int hasil = increm - decrem;
    cout << hasil;
    
    

    return 0;
}