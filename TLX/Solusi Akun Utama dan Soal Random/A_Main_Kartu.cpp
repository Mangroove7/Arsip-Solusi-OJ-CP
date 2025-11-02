#include <bits/stdc++.h>
using namespace std;

// Map angka ke rank
int rank_num(char c) {
    string order = "6789TJQKA";
    return order.find(c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; cin >> T;
    while (T--) {
        int N, M; char R; 
        cin >> N >> M >> R;

        multiset<int> truf;          // Kartu truf lo (cuma nyimpen rank)
        map<char, multiset<int>> suit_cards; // Kartu non-truf per suit

        // Baca kartu lo
        for (int i = 0; i < N; i++) {
            string card; cin >> card;
            char num = card[0], suit = card[1];
            if (suit == R) truf.insert(rank_num(num));
            else suit_cards[suit].insert(rank_num(num));
        }

        bool bisa = true;
        // Baca kartu lawan
        for (int i = 0; i < M; i++) {
            string card; cin >> card;
            char num = card[0], suit = card[1];
            int target = rank_num(num);

            if (suit == R) { // Lawan pake truf
                auto it = truf.upper_bound(target);
                if (it != truf.end()) truf.erase(it);
                else { bisa = false; break; }
            } else { // Lawan non-truf
                auto &cards = suit_cards[suit];
                auto it = cards.upper_bound(target);
                if (it != cards.end()) cards.erase(it);
                else {
                    // Coba pake truf
                    if (!truf.empty()) truf.erase(truf.begin());
                    else { bisa = false; break; }
                }
            }
        }

        cout << (bisa ? "YA" : "TIDAK") << '\n';
    }
    return 0;
}