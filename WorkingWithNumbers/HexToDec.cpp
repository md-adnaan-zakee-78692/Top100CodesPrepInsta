#include <iostream>
using namespace std ;

int HexToDec(string hex_num){
    int dec = 0 , base = 1 ;
    for(int i=hex_num.length()-1; i>=0; i--){
        if(hex_num[i]>='0' && hex_num[i]<='9'){ // 0=48
            dec += (hex_num[i]-48)*base ;
        }
        else if(hex_num[i]>='A' && hex_num[i]<='F'){ // A=65
            dec += (hex_num[i]-55)*base ;
        }
        base *= 16 ;
    }
    return dec ;
}

int main(){
    string hex ;
    cout << "Enter Hex Number: " ;
    cin >> hex ;
    cout << HexToDec(hex) ;
}