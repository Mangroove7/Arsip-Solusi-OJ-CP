#include <bits/stdc++.h>
using namespace std;
// ini adalah algoritma binary search 
// NB : arr/vec yang akan di-binser harus di urutkan terlebih dahulu secara ascending


int binser(vector <int> vec,int x,int bawah,int atas){
    while (bawah <= atas){
        int tengah = bawah + (atas - bawah) / 2;
        // memulai algoritma dari tengah (divide & conquer concept)
        // jika elemen vec di tengah = x maka kembalikan nilai tengah
        if (x == vec[tengah]){
            return tengah;
        }
        // jika elemen di posisi tengah < x maka geser batasan bawah lebih 1 dari tengah
        if (x > vec[tengah]){
            bawah = tengah + 1;
        }
        // jika sebaliknya
        else {
            atas = tengah - 1;
        }
    }
    // jika tidak ditemukan
    return -1;
}

int main(){
    //contoh !!
    vector<int> contoh = {5, 3, 6, 7, 2};
    
    // pertama kita harus urutkan elemen dari vektor kita dapat menggunakan std::sort() untuk mempermudah
    sort(contoh.begin(),contoh.end());
    // setelah itu kita dapat memanggil fungsi pencarian , misalkan kita akan mencari nilai 7;
    int hasil = binser(contoh,7,0,4);
    cout << "7 ditemukan pada index : " << hasil << endl;
}