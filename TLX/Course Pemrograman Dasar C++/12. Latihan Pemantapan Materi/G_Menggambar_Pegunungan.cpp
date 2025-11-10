#include <iostream>
using namespace std;
string gunung(int n){
    if(n == 1)return "*\n";
    if(n == 2)return "*\n**\n*\n";
    string s = "";
    for(int i = 0;i < n;i++){
        s += "*";
    }
    s += "\n";
    return gunung(n - 1) + s + gunung(n - 1);
    
}
int main(){
    int n;cin >> n;
    
    cout << gunung(n);
    
}