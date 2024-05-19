#include<bits/stdc++.h>
using namespace std ;

bool isPerfectSquare(int num){
    double sq = sqrt(num) ;
    return (ceil(sq) == floor(sq)) ; //if the number is integer return true
}

int main(){
    int num1;
    cout << "Enter a number: " ;
    cin >> num1;
    int res = isPerfectSquare(num1) ;
    cout << res ;
    return 0 ;
}