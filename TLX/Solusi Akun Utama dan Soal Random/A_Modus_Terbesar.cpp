#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    // cout << "Masukkan jumlah data: ";
    cin >> N;
    
    unordered_map<int, int> freq; // kotak untuk simpan frekuensi tiap angka
    int angka;
    
    // Baca N angka dan hitung frekuensinya
    // cout << "Masukkan " << N << " angka (pisahkan dengan spasi): ";
    for (int i = 0; i < N; i++) {
        cin >> angka;
        freq[angka]++; // tambah hitungan tiap angka
    }
    
    // Cari modus terbesar
    int modus = 0;
    int maxFreq = 0;
    for (auto p : freq) {
        // Jika frekuensi lebih tinggi atau sama tapi angka lebih besar
        if (p.second > maxFreq || (p.second == maxFreq && p.first > modus)) {
            modus = p.first;
            maxFreq = p.second;
        }
    }
    
    cout <<  modus << endl;
    
    return 0;
}
