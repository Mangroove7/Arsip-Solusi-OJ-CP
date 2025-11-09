#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        //mengonversi tiap karakter pada string menjadi huruf besar
        c = c - 'a' + 'A';
        //menggeser huruf kedepan sebanyak 1 kali terkecuali untuk z yang balik lagi ke a.
        if (c != 'Z')c += 1;
        else c = 'A';
        cout << c;
    }
    cout << endl;
}
