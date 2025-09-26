#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int pembilang,penyebut,hasil;
    scanf("%d %d",&pembilang,&penyebut);
    if(penyebut == 0){
        printf("Penyebut tidak boleh 0\n");
    }
    else{
        hasil = pembilang / penyebut;
        printf("%d",hasil);
    }
    

    return 0;
}