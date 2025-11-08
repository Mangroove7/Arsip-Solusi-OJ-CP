#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150};
    int total[3] = {0,0,0};
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 3;j++){
            if(j == 0){
                total[0] += (luas[i][j] * 100);
            }
            else if (j == 1){
                total[1] += (luas[i][j] * 120);
            }
            else{
                total[2] += (luas[i][j] * 150);

            }
        }
    }
    for(int i = 0;i < 3;i++){
        cout << total[i] << endl;
    }
}
