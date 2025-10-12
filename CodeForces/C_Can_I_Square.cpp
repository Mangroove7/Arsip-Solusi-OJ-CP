#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long a;cin >> a;
            sum += a;
        }
        long long is_prfct = sqrt(sum);
        if (is_prfct * is_prfct == sum) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}