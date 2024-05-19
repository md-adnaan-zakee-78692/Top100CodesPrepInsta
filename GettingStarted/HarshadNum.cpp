/*A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.*/

#include <iostream>
using namespace std ;

bool isHarshad(int num){
    int sumOfDig = 0 ;
    int temp = num ;
    while(temp != 0){
        sumOfDig += temp % 10 ;
        temp /= 10 ;
    }
    return num % sumOfDig == 0 ? true : false ;
}

int main(){
    int num1 ;
    cout << "Enter a number: " ;
    cin >> num1 ;
    int res = isHarshad(num1) ;
    cout << res ;
    return 0 ;
}