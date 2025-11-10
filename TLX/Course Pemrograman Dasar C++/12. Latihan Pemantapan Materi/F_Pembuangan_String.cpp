#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;cin >> s >> t;
    while(s.find(t) != -1){
        int penunjuk = s.find(t);
        int jumlah_t = t.size();
        s = s.erase(penunjuk,jumlah_t);
    }
    cout << s << endl;
    return 0;
}