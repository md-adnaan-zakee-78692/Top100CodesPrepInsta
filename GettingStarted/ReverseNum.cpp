#include <iostream>
using namespace std ;

int reverse(int num){
    int reversed_num = 0 ;
    while(num){
        int ld = num % 10 ;
        reversed_num = reversed_num * 10 + ld ;
        num /= 10 ;
    }
    return reversed_num ;
}

int main(){
    int num ;
    cout << "Enter a number: " ;
    cin >> num ;
    cout << reverse(num) ;
    return 0 ;
}