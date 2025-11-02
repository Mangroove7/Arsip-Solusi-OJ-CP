#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> A(n), B(m);
    long long sumA = 0, sumB = 0;
    
    // Baca data truk A
    for (int i = 0; i < n; i++){
        cin >> A[i];
        sumA += A[i];
    }
    
    // Baca data truk B
    for (int i = 0; i < m; i++){
        cin >> B[i];
        sumB += B[i];
    }
    
    // Jika rata-rata truk A sudah lebih besar, ga perlu pindah apa-apa
    if ((double)sumA / n > (double)sumB / m) {
        cout << 0 << "\n";
        return 0;
    }
    
    // Urutkan truk B (ascending)
    sort(B.begin(), B.end());
    
    // Buat prefix sum untuk truk B
    vector<long long> prefix(m);
    prefix[0] = B[0];
    for (int i = 1; i < m; i++){
        prefix[i] = prefix[i-1] + B[i];
    }
    
    long long ans = -1; // Jika tidak mungkin, nanti akan tetap -1
    
    // Coba semua kemungkinan threshold yang valid
    // j = index pertama dari kentang yang akan dipindahkan
    // Karena truk B harus tersisa minimal 1 kentang, j harus >= 1 (0-indexed: j = 1 ... m-1)
    for (int j = 1; j < m; j++){
        // Hanya pertimbangkan index yang merupakan kemunculan pertama dari suatu bobot
        if(j > 0 && B[j] == B[j-1]) continue;
        
        int moved_count = m - j;  // jumlah kentang yang dipindahkan
        long long moved_sum = prefix[m-1] - (j > 0 ? prefix[j-1] : 0);  // total bobot kentang yang dipindah
        
        // Hitung rata-rata baru
        long long new_sumA = sumA + moved_sum;
        int new_n = n + moved_count;
        long long new_sumB = sumB - moved_sum;
        int new_m = j;
        
        double new_avgA = (double)new_sumA / new_n;
        double new_avgB = (double)new_sumB / new_m;
        
        if(new_avgA > new_avgB){
            if(ans == -1 || moved_sum < ans)
                ans = moved_sum;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
