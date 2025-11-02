#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // Optimasi I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5000, a, b, m;
    cin >> a >> b >> m;

    // Set untuk menyimpan angka unik
    set<long long> unique_terms;

    if (n >= 1) {
        unique_terms.insert(a % m);
    }
    if (n >= 2) {
        unique_terms.insert(b % m);
    }

    // DP: Bangun deret dari bawah ke atas
    long long prev = a % m;
    long long curr = b % m;

    // Loop dari suku ke-3 sampai ke-n
    for (int i = 3; i <= n; ++i) {
        long long next = (prev + curr) % m;
        unique_terms.insert(next);
        prev = curr;
        curr = next;
    }

    // Cara yang lebih simpel buat dapetin jumlah elemen di set
    cout << unique_terms.size() << endl;

    return 0;
}