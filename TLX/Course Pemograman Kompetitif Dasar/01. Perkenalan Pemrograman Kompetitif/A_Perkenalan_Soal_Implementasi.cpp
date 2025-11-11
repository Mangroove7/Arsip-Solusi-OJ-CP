#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int m,n;cin >> m >> n;
    //kita menggunakan vector 2 dimensi 
    //bisa saja menggunakan array multi-dimensi
    //tetapi competitive programmer biasanya menggunakan vektor dikarenakan fitur dan dinamisnya
    vector <vector<int>> a(m,vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    vector <vector<int>> b(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = a[m - 1 - j][i];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}