#include <iostream>
using namespace std ;

int sumOfProperDivisors(int num){
    int sum = 0 ;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            if(num/i==i)
                sum += i ;
            else{
                sum += i ;
                sum += num/i ;
            }
        }
    }
    return sum+1 ;
}

bool isFriendlyPair(int num1, int num2){
    return sumOfProperDivisors(num1)/num1 == sumOfProperDivisors(num2)/num2 ;
}

int main(){
    int num1, num2 ;
    cout << "Enter the numbers: " ;
    cin >> num1 >> num2 ;
    cout << isFriendlyPair(num1, num2) ;
    return 0 ;
}