#include <bits/stdc++.h>
using namespace std;

bool agak_prima(int n){
    int cnt = 0;
    for(int i = 1;i * i <= n;i++){
        if (n % i == 0)cnt++;
    }
    if(cnt <= 2){
        return true;
    }
    return false;
}
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        if(agak_prima(n)){
            cout << "YA" << endl;
        }
        else cout << "BUKAN" << endl;
    }
}