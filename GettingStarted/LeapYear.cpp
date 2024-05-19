/*If a year is divisible by 4, it is a leap year.
If a year is divisible by 100, it is not a leap year unless:
If a year is divisible by 400, it is a leap year.*/

#include<iostream>
using namespace std ;

bool isLeap(int year){
    if(year%400==0 || (year%4==0 && year%100 != 0)) return true ;
    return false ;
}

int main(){
    int year ;
    cout << "Enter year: " ;
    cin >> year ;
    int res = isLeap(year) ;
    cout << res ;
    return 0 ;
}