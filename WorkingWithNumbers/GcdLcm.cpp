#include <iostream>
using namespace std ;

int gcd(int num1, int num2){   // Euclid Algo
    while(num2 != 0){
        int rem = num1 % num2 ;
        num1 = num2 ;
        num2 = rem ;
    }
    return num1 ;
}

int main(){
    int num1, num2 ;
    cout << "Enter the numbers: " ;
    cin >> num1 >> num2 ;
    int gcdres = gcd(num1, num2) ;
    cout << "GCD: " << gcd << endl ;
    cout << "LCM: " << (num1*num2)/gcdres ;
}