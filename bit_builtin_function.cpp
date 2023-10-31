#include<bits/stdc++.h>
using namespace std;
int main(){

    int x = 5328; // 00000000000000000001010011010000
    //the number of zeros at the end of the bit representation
    cout << __builtin_clz(x) << "\n"; // 19//
    
    ///the number of zeros at the beginning of the bit representation
    cout << __builtin_ctz(x) << "\n"; // 4
    
    ///number of one
    cout << __builtin_popcount(x) << "\n"; // 5/// number of one
    
    ///the parity (even or odd) of the number of ones in the bit representation
    cout << __builtin_parity(x) << "\n"; // 1
    return 0;
    
}