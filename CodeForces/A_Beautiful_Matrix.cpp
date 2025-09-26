#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[5][5];
    int posisi[2];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1){
                posisi[0] = i;
                posisi[1] = j;
            }
        }
    }
    const int cantik = 2;
    int posisi_i,posisi_j;
    (posisi[0] != 2)?posisi_i = abs(posisi[0] - cantik):posisi_i = 0;
    (posisi[1] != 2)?posisi_j = abs(posisi[1] - cantik):posisi_j = 0;
    int hasil = posisi_i + posisi_j;
    cout << hasil;

    return 0;
}