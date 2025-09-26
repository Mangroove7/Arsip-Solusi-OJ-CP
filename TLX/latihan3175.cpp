#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bilangan;
    scanf("%d",&bilangan);
    if(bilangan > 0){
        printf("Bilangan Bulat Positif\n");
    }
    else if(bilangan == 0){
        printf("Bilangan Bulat Nol\n");
    }
    else{
        printf("Bilangan Bulat Negatif\n");
    }

    return 0;
}