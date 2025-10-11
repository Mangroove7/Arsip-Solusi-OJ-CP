#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //input n dan k
    int n,k;cin >> n >> k;

    //definisikan jam 12 dan start kontes limak
    float start = 20.0 * 60,end = 24.0 * 60;

    
    float jalan = k;

    //tambahkan waktu perjalanan ke start;
    start += jalan;
    
    //buat loop prefix-sum sampai berapa banyak problem limak bisa selesaikan dengan 5*i
    int i = 1;
    int cnt = 0;
    // cout << end;
    while (start < end && i <= n ){
        
        start += ((5 * i));
        
        i++;
        cnt++;
    }
    
    (start > end)?cout << cnt - 1 << endl:cout << cnt;

    return 0;
}