#include <bits/stdc++.h>
using namespace std;

int main(){
    //fastI/O
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    // definisikan N
    cout << "Program mencari semua bilangan prima < N\n";
    cout << "Masukkan nilai N\n";
    int n;cin >> n;

    // implementasikan algo sieve
    //pertama-tama definisikan terlebih dahulu sebuah arr berukuran N dan set mula-mula nilainya benar
    vector <bool> sieve(n + 1,true);
    //kita tahu bahwa 0 dan 1 bukanlah bilangan prima sehingga set bilangan ini menjadi false
    sieve[0] = false;
    sieve[1] = false;
    //kita mulai loop dari 2 dan cek hanya sampai sqrt(N) (gunakan lemma faktor bil.N)
    for(int i = 2;i * i<= n;i++){
        //jika bilangan itu prima(true) eksekusi algoritma untuk menghapus semua faktor dari bil.prima itu sendiri
        if(sieve[i]){
            //hapus semua bilangan yang merupakan kelipatan dari prima yang ditunjul
            for(int p = i * i;p <= n;p += i){
                sieve[p] = false;
            }
            //setelah semua kelipatan dari prima sebelumnya dihapus maka bilangan yang ditunjuk selanjutnya PASTI prima!
        }
    }

    // tampilkan semua bilangan prima < N
    for(int i = 0;i < n;i++){
        if(sieve[i])cout << i << endl;
    }
}