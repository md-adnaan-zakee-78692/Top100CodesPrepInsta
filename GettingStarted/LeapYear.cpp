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
}