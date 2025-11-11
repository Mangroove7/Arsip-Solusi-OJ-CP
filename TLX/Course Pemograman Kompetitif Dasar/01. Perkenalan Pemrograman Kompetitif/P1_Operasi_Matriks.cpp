#include <bits/stdc++.h>
using namespace std;

//fungsi refleksi horizontal
vector <vector <int>> hor(vector <vector <int>> a,int n,int m){
    vector <vector <int>> b(n, vector <int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = a[n - 1 - i][j];
        }
    }
    return b;
}
//fungsi refleksi vertikal
vector <vector <int>> ver(vector <vector <int>> a,int n,int m){
    vector <vector <int>> b(n, vector <int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = a[i][m - 1 - j];
        }
    }
    return b;
}

//fungsi rotasi 90 derajat
vector <vector <int>> rot90(vector <vector <int>> a,int n,int m){
    vector <vector <int>> b(m, vector <int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[n - 1 - j][i];
        }
    }
    return b;
}

//fungsi rotasi 180 derajat
vector <vector <int>> rot180(vector <vector <int>> a,int n,int m){
    vector <vector <int>> b(m, vector <int>(n));

    b = rot90(a,n,m);
    b = rot90(b,m,n);
    return b;
}

//rotasi 270 derajat
vector <vector <int>> rot270(vector <vector <int>> a,int n,int m){
    vector <vector <int>> b(n, vector <int>(m));

    b = rot180(a,n,m);
    b = rot90(b,n,m);

    return b;
}

vector <vector<int>> operasi(string s,vector <vector <int>> a,int n,int m){
    vector <vector <int>> b;
    if (s == "_"){
        b = hor(a,n,m);
    }
    else if (s == "|"){
    b = ver(a,n,m);
    }
    else if (s == "90"){
    b = rot90(a,n,m);
    }
    else if(s == "180"){
    b = rot180(a,n,m);
    }
    else if(s == "270"){
    b = rot270(a,n,m);
    }
    return b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, op;cin >> n >> m >> op;
    vector <vector <int>> a(n,vector <int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    string simbol[op];
    for (int i = 0; i < op; i++) {
        cin >> simbol[i];
    }
    vector <vector <int>> matrix_transformasi;
    matrix_transformasi = a;
    for (int i = 0; i < op; i++) {

    matrix_transformasi = operasi(simbol[i], matrix_transformasi, n, m); 

    n = matrix_transformasi.size();
    m = matrix_transformasi[0].size();
}

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << matrix_transformasi[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}