#include <iostream>
#include <math.h>
using namespace std ;

int binToDec(int binary){
    int i = 0 ;
    int dec = 0 ; 
    while(binary){
        int ld = binary % 10 ;
        dec += ld * pow(2,i) ;
        i++ ;
        binary /= 10 ;
    }
    return dec ;
}

int main(){
    int binary_num ;
    cout << "Enter number in binary: " ;
    cin >> binary_num ;
    cout << binToDec(binary_num);
}