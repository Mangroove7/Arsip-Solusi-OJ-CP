#include <iostream>
using namespace std;

int main() {
    int jantan = 67;
    int betina = 98;

    if (jantan % 2 == 0) {
        cout << "banyaknya bebek jantan adalah bilangan genap" << endl;
    }
    // kita hanya perlu menduplikat kondisi yang sama untuk betina.
    //operator "%" digunakan untuk mencari hasil bagi antara pembilang dan penyebut
    //sehingga kita mengecek apakah banyaknya bebek habis dibagi 2 atau betina mod 2 = 0
    if (betina % 2 == 0) {
        cout << "banyaknya bebek betina adalah bilangan genap" << endl;
    }
}
