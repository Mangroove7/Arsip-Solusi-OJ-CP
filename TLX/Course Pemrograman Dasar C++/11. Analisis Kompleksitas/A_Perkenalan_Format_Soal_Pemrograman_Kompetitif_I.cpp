#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;cin >> N;
    vector <int> A;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A.push_back(x);
    }
    int jumlah = 0;
    for (int i = 0; i < N; i++) {
        jumlah += A[i];
    }
    for(int i = 0;i < N;i++){
        cout << jumlah - A[i] << endl;
    }
}