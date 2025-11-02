#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int r,c;
void cetak(vector<vector<int>> &a) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j];
        }
        cout << '\n';
    }
}

void jatuh(int s, vector<vector<int>> &a) {
    for (int j = 0; j < c; j++) {
        for (int i = s - 2; i >= 0; i--) {
            if (a[i][j] != 0 && a[i + 1][j] == 0) {
                int b = i;
                while (b + 1 < r && a[b + 1][j] == 0) {
                    swap(a[b][j], a[b + 1][j]);
                    b++;
                }
            }
        }
    }
}

void runtuh(vector<vector<int>> &a) {
    int last = 0;
    for (int i = 0; i < a.size(); i++) {
        bool allOnes = true;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != 1) {
                allOnes = false;
                break;
            }
        }

        if (allOnes) {
            for (int j = 0; j < a[i].size(); j++) {
                a[i][j] = 0;
            }
            last = i + 1;
        }
    }
    jatuh(last, a);
}

int main() {
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char ch;
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }

    for (int i = 0; i < 25; i++) {
        runtuh(a);
    }

    cetak(a);

    return 0;
}