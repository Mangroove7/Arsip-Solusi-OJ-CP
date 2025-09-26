#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;cin >> s;
    vector <char> kontrol(s.length());
    for(int i = 0;i < s.length();i++){
        kontrol[i] = s.at(i);
    }
    int R = 0,L = 0,U = 0,D = 0;
    int x = 0;int y = 0;
    for(int i = 0;i < kontrol.size();i++){
        if(kontrol[i] == 'R') R++;
        else if(kontrol[i] == 'L') L++;
        else if(kontrol[i] == 'U') U++;
        else if(kontrol[i] == 'D') D++;
    }
    x += R;
    x -= L;
    y += U;
    y -= D;
    cout << x << " " << y << '\n';    
}