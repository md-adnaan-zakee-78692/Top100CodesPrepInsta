#include <iostream>
using namespace std ;

bool isAbundant(int num){
    int proper_divisor_sum = 0 ;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            if(num/i==i){
                proper_divisor_sum += i ;
            }
            else{
                proper_divisor_sum += i ;
                proper_divisor_sum += num/i ;
            }
        }
    }
    return (1+proper_divisor_sum)>num? true:false ;
}

int main(){
    int num1 ;
    cout << "Enter a num:" ;
    cin >> num1 ;
    int res = isAbundant(num1) ;
    cout << res ;
}