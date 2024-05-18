#include <iostream>
using namespace std ;

int factorial(int num){
    int fact = 1, i = num ;
    while(i >= 2){
        fact *= i ;
        i -- ;
    }
    return fact ;
}

bool isStrongNum(int num){
    int sum_of_fact = 0 ;
    int temp = num ;
    while(temp){
        int ld = temp % 10 ;
        sum_of_fact += factorial(ld) ;
        temp /= 10 ;
    }
    return sum_of_fact == num ;
}

int main(){
    int num ;
    cout << "Enter a number: " ;
    cin >> num ;
    int res = isStrongNum(num) ;
    cout << res ;
}