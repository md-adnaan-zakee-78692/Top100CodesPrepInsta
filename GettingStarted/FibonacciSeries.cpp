#include <iostream>
using namespace std ;

void fibonacci(int n){
    int num1 = 0, num2 = 1 ;
    cout << num1 << " " << num2 << " " ;
    for(int i=2; i<n; i++){
        int num3 = num1 + num2 ;
        cout << num3 << " " ;
        num1 = num2 ;
        num2 = num3 ;
    }
}

int main(){
    int limit ;
    cout << "Enter how many terms in the fibonacci series: " ;
    cin >> limit ;
    fibonacci(limit) ;
}