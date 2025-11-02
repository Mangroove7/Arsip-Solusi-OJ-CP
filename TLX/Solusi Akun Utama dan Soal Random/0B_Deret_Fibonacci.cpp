#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//gunakan binet formula untuk fungsi fibonacci dengan kompleksitas waktu O(1)
//kita deklarasikan variabel phi


int fib(int n) {
    
    // Golden ratio (φ) and its negative counterpart (ψ)
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;

    // Compute Fibonacci number using full Binet's formula
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}
int main(){
    //pendekatan naif , while loop sampai N == fib(n)
    ll n;cin >> n;
    int cnt = 0;

    
    cout << cnt;
    return 0;
}