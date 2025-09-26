#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        reverse(data[i].begin(), data[i].end()); // Balikkan string <button class="citation-flag" data-index="4"><button class="citation-flag" data-index="10">
        
        // Hapus leading zero
        size_t first_non_zero = data[i].find_first_not_of('0');
        if (first_non_zero == string::npos) {
            data[i] = "0"; // Jika semua karakter adalah '0' <button class="citation-flag" data-index="6"><button class="citation-flag" data-index="8">
        } else {
            data[i] = data[i].substr(first_non_zero); // Ambil substring mulai dari karakter non-zero pertama <button class="citation-flag" data-index="6"><button class="citation-flag" data-index="8">
        }
    }
    for (const auto& str : data) {
        cout << str << '\n';
    }
    return 0;
}