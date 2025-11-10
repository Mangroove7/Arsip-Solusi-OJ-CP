#include <iostream>
using namespace std;

bool prima(int n){
    if ( n <= 1)return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0)return false;
    }
    return true;
}
int main(){
    int q;cin >> q;
    for(int i = 0;i < q;i++){
        int n;cin >> n;
        if(prima(n)){
            cout << "YA" << endl;
        }
        else cout << "BUKAN" << endl;
    }
}