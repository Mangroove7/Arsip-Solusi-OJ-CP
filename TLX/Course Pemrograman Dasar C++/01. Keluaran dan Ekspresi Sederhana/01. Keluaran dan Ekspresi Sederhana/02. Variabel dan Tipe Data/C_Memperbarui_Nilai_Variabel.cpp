#include <iostream>
using namespace std;

int main() {
    // kata sandi bulan pertama
    int sandi = 174;
    cout << sandi << endl;

    // kata sandi bulan kedua
    //saya menulisnya dengan menggunakan operator *=
    //yang sama saja dengan sandi = sandi * 23
    //yang berarti update nilai sandi sekarang dimana ambil nilai sandi sebelumnya dikali 23!
    sandi *= 23;
    cout << sandi << endl;

    // kata sandi bulan ketiga
    sandi *= 23;
    cout << sandi << endl;
}
