/*Untuk solusi umum secara rekursi, fibonacci ke-n dapat dirumuskan sebagai berikut:
long long fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
    solusi ini merupakan perumusan umum dari barisan fibonacci. O(2^N)
*/

// Ada banyak cara kita untuk menentukan barisan fibonacci
// mulai dari pendekatan dp dan matriks
// Namun kali ini kita akan mengimplementasikan solusi O(1) dengan binet formula walaupun akan ada kekurangan yang akan dijelaskan nantinya

#include <iostream>
#include <cmath>

//phi merupakan konstanta irasional dari rasio emas yang terkait langsung thdp fib sequence
const double phi = 1 + sqrt(5);
//dan ini adalah invers dari phi
const double psi = 1 - sqrt(5);

long long fib(int n) {
    // kita bulatkan
    long long binet = round((pow(phi,n) - pow(psi,n)) / (pow(2,n)*sqrt(5)));
    return binet;
}
//secara umum , kompleksitasnya ialah O(1) yang dimana ini adalah algoritma paling efisien untuk mencari suku fibonacci
//namun terdapat kekurangan besar juga yaitu kita tahu bahwa komputer tidak presisi dalam menghitung bilangan desimal (floating point) sehingga solusi ini menjadi kurang presisi diakibatkan hal tersebut

int main(){
    for (int i = 0; i <= 10; i++) {
        std::cout << fib(i) << '\n';
    }
    return 0;
}