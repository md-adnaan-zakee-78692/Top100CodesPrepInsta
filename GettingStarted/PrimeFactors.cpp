#include <iostream>
using namespace std ;

void primeFactors(int num){
    for(int i=2; i*i<=num; i++){
        while(num%i==0){
            cout << i << " " ;
            num /= i ;
        }
    }
    if(num != 1) cout << num ; // T.C. O(√n * log n)
}

int main(){
    int num ;
    cout << "Enter a number: " ;
    cin >> num ;
    primeFactors(num) ;
    return 0 ;
}