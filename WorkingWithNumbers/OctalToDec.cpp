#include <iostream>
using namespace std ;

int OctalToDec(int octal_num){
    int dec = 0 , weight = 1 ;
    while(octal_num){
        int ld = octal_num % 10 ;
        dec += ld*weight ;
        weight *= 8 ;
        octal_num /= 10 ;
    }
    return dec ;
}

int main(){
    int octal ;
    cout << "Enter Octal Number: " ;
    cin >> octal ;
    cout << OctalToDec(octal) ;
}