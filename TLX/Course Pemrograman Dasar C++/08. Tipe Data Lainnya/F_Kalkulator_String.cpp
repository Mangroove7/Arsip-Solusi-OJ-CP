#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+'){
        // untuk handle nilai yang besar
        long long jumlah = 0;
        for(int i = 0;i < data.size();i++){
            long long el = stoi(data[i]);
            jumlah += el;
        }
        return to_string(jumlah);
    }
    if (op == '*'){
        long long jumlah = 1;
        for(int i = 0;i < data.size();i++){
            long long el = stoi(data[i]);
            jumlah *= el;
        }
        return to_string(jumlah);
    }
    return "KESALAHAN";
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
