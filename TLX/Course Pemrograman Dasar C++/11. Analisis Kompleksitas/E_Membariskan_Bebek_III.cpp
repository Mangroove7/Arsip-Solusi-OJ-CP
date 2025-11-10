#include <iostream>
using namespace std;

int main(){
    //gunakan lemma faktor bilangan
    long long N;cin >> N;
    long long r_terbaik = 0;
    long long c_terbaik = 0;
    for(long long r = 1;r * r<=N;r++){
        if(N % r == 0){
            r_terbaik = r;
            c_terbaik = N / r;

        }
    }

    cout << r_terbaik << " " << c_terbaik;

    return 0;
}