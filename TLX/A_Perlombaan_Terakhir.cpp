#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    // Inisialisasi vector dua dimensi dengan ukuran r x c
    vector<vector<int>> gedung(r, vector<int>(c));
    
    // Input data
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> gedung[i][j];
        }
    }
    
    // Output data
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << gedung[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
