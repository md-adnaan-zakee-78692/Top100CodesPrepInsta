#include<iostream>
using namespace std ;

int DecToBin(int decimal_num){
    int bin = 0, weight = 1;        // ans = ans*10+digit -- for making number from digits
    while(decimal_num){             // ans = digit*(10)^i+ans -- for making reversed number from digits
        int bit = decimal_num & 1 ;
        bin = bit * weight + bin ;
        weight *= 10 ;
        decimal_num = decimal_num >> 1 ;
    }
    return bin ;
}

int main(){
    int decimal_num ;
    cout << "Enter a decimal number: " ;
    cin >> decimal_num ;
    cout << DecToBin(decimal_num) ;
}