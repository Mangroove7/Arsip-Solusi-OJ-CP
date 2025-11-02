#include <bits/stdc++.h>

using namespace std;

bool pengecek_faktor(int a) {
    int cnt = 0;
    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            // Jika i adalah akar dari a, hanya dihitung sekali
            if (i * i == a)
                cnt++;
            else
                cnt += 2;
        }
    }
    return (cnt == 3);
}


int main() {

    int n; cin >> n;
    vector <int> a;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int j = 0;j < n;j++){
        if (pengecek_faktor(a[j]) == true){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

}