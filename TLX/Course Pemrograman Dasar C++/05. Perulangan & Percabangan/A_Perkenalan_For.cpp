#include <iostream>
using namespace std;

//kita tinggal memindahkan kondisi dan statement serta increment
//pada while ke bagian kondisi for
int main() {
    for (int sisi = 121 /*inisialisasi awal*/; sisi <= 125 /*kondisi*/; sisi++/*increment atau penambahan nilai*/) {
        cout << sisi * sisi << endl;
    }
}
