#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 2 == 0) {
        cout << "total banyaknya bebek adalah bilangan genap" << endl;
    } // apabila total_bebek tidak habis dibagi oleh 2 maka pasti total_bebek ialah ganjil
    else {
        cout << "total banyaknya bebek adalah bilangan ganjil" << endl;
    }
}
