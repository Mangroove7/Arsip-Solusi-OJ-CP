#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;cin >> n;
    string satu,dua;cin >> satu >> dua;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(satu[i] == 'G'){
            if(dua.find('K') != string::npos){
                cnt++;
                dua.erase(dua.find('K'),1);
            }
        }
        else if(satu[i] == 'B'){
            if(dua.find('G') != string::npos){
                cnt++;
                dua.erase(dua.find('G'),1);
            }
        }
        else if(satu[i] == 'K'){
            if(dua.find('B') != string::npos){
                cnt++;
                dua.erase(dua.find('B'),1);
            }
        }
        
    }
    cout << cnt;
    return 0;
}