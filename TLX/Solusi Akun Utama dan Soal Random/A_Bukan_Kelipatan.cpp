#include <bits/stdc++.h>
using namespace std;


int main(){
    int prima[3];
    cin >> prima[0] >> prima[1] >> prima[2];
    int lai = *max_element(prima,prima + 3);
        for(int i = 2;i <= 100;i++){
            if(i % prima[0] != 0 && i % prima[1] != 0 && i % prima[2] != 0){
                cout << i << endl;
                break;
        }
    }


}