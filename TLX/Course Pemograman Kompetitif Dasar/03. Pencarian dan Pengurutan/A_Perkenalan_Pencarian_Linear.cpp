#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;cin >> n >> x;
    vector <int> a(n);
    
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int minimum =INT_MAX;
    int selisih_min;
    for(int j = 0;j < n;j++){
        if(abs(x - a[j]) < minimum){
            minimum = abs(x - a[j]);
            selisih_min = a[j];
        }
        else if(abs(x - a[j]) == minimum){
            minimum = abs(x - a[j]);
            selisih_min = min(a[j],a[j-1]);
        }
    }
    cout << selisih_min << endl;
    return 0;
}