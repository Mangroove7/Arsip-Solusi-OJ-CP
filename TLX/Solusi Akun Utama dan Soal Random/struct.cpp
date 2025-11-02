#include <bits/stdc++.h>
using namespace std;

struct Game{
    int hai;
    int baik;
    int keren;
};

int main(){
    Game downtoll = {
        .hai = 1,
        .baik = 2,
        .keren = 3,
    };
    cout << downtoll.hai << downtoll.baik << downtoll.keren << "\n";
    return 0;
}