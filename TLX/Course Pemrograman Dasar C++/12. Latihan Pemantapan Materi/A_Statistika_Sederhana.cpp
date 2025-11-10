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
    int max = A[0];
    int min = A[0];
    for (int i = 0; i < N; i++) {
        if(max < A[i])max = A[i];
        if(min > A[i])min = A[i];
    }

    cout << max << " " << min << endl;
    return 0;
}