#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;
    // jika kita hanya menggunakan if maka
    // apabila suatu statement dapat memenuhi > 1 if case
    // maka blok kode tiap kondisi yang dipenuhi akan dijalankan
    // oleh karena itu kita menghindarinya dengan else if memastikan
    // statement yang dicek hanya tepat di 1 kondisi
    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    }
    else if (total_bebek % 11 == 0) {
        cout << 11 << endl;
    }
    else if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    }
    else if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } else {
        cout << 1 << endl;
    }
}
