#include <iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int penunjuk = 0;
    for (int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            if(penunjuk > 9)penunjuk = 0;
            cout << penunjuk;
            penunjuk++;
        }
        cout << endl;
    }
    return 0;
}