#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    /*Solusi dapat dipersingkat dengan menggunakan
    fungsi perulangan iteratif dibawah ini atau juga bisa menggunakan solusi yang ditunjukkan secara naif
    oleh tlx */
    /*
    #include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;

    // bulan pertama
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan kedua
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan ketiga
    luas_kandang += 7;
    cout << luas_kandang << endl;
}

    */
    for (int i = 0;i < 3;i++){
        luas_kandang +=  7;
        cout << luas_kandang << endl;
    }

}