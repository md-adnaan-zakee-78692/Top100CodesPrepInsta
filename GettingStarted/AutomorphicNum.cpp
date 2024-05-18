#include <iostream>
using namespace std;

bool isAutomorphic(int num){
    long long square = num * num;
    while(num){
        if(num%10 != square%10) return false ;
        num /= 10 ;
        square /= 10 ;
    }
    return true ;
}

int main(){
    int num1 ;
    cout << "Enter a number: " ;
    cin >> num1 ;
    int res = isAutomorphic(num1) ;
    cout << res ;
}