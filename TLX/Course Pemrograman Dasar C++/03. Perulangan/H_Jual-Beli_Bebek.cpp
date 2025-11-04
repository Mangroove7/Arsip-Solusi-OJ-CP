#include <iostream>
using namespace std;

int main() {
    int jantan = 0, betina = 0;
    int tanggal =  0;
    // kita set jantan bertambah 1 betina bertambah 1 pada tanggal ke 1
    // dikarenakan jika kita tidak membuatnya kondisi pada while tidak akan pernah berjalan karena dimulai ditanggal 0
    jantan = 1;
    betina = 1;
    tanggal = 1;
    while (betina < (10 * jantan)) {
        jantan++;
        betina += tanggal;
        tanggal++;
    }

    cout << tanggal << endl;
}
