#include <iostream>
using namespace std ;

bool isPrime(int num){
    if(num == 1) return false ;
    if(num == 2 || num == 3) return true ;
    if(num % 2 == 0 || num % 3 == 0) return false ;
    for(int i=5; i*i<=num; i=i+6){
        if(num % i == 0 || num % (i+2) == 0) return false ;
    }
    return true ;
}

void primeNumbers(int start, int end){
    if(start < 2) start = 2 ;
    for(int i=start; i<=end; i++){
        if(isPrime(i)) cout << i << " " ;
    }
}

int main(){
    int start, end ;
    cout << "Enter Range: " ;
    cin >> start >> end ;
    primeNumbers(start, end) ;
}