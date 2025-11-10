#include <iostream>
#include <cmath>
using namespace std;
void dekat(int X[],int Y[],int N,int D){
    int min_T = 200000000;
    int max_T = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int dx = abs(X[i] - X[j]);
            int dy = abs(Y[i] - Y[j]);
            
            int pow_dx = pow(dx, D);
            int pow_dy = pow(dy, D);
            
            int t = pow_dx + pow_dy;
            
            if (t < min_T) {
                min_T = t;
            }
            if (t > max_T) {
                max_T = t;
            }
        }
    }
    cout << min_T << " " << max_T << endl;
}
int main(){
    int n,d;cin >> n >> d;
    int x[n];
    int y[n];
    for (int i = 0;i < n;i++){
        cin >> x[i] >> y[i];
    }
    
    dekat(x,y,n,d);
    return 0;
}