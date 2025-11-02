#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bulan;
    scanf("%d", &bulan);
    switch(bulan){
        case 1:
            printf("Januari\n");
            break;
        case 2:
            printf("Februari\n");
            break;
        case 3:
            printf("Maret\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("Mei\n");
            break;
        case 6:
            printf("Juni\n");
            break;
        case 7: 
            printf("Juli\n");
            break;
        case 8:
            printf("Agustus\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("Oktober\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("Desember\n");
            break;
        default:
            printf("Tidak ada bulan yang sesuai\n");
            break;
    }

    return 0;
}