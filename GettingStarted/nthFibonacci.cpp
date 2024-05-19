#include <iostream>
using namespace std ;

int nthFibonacci(int n){
    int num1 = 0 , num2 = 1 , counter = 2, num3 ;
    while(counter != n){
        num3 = num1 + num2 ;
        counter ++ ;
        num1 = num2 ;
        num2 = num3 ;
    }
    return num3 ;
}

int main(){
    int n ;
    cout << "Enter which term of the series you want: " ;
    cin >> n ;
    cout << nthFibonacci(n) ;
    // Try this question with Matrix multiplication also.
}