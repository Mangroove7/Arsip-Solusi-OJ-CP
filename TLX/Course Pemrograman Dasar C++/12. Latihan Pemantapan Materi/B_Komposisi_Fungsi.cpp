#include <iostream>
#include <cmath>
using namespace std;

int f(int x,int A,int B){
    return abs(A * x + B);
}

int main(){
    int A,B,K,x;cin >> A >> B >> K >> x;
    //membuat fungsi komposisi secara iteratif
    int komposisi = f(x,A,B);
    for (int i = 0;i < K - 1;i++){
        komposisi = f(komposisi,A,B);
    }
    cout << komposisi << endl;
}