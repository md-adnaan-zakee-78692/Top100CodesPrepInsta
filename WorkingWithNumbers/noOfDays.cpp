#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int noOfDays(int month, int year){
    
    if(month%2==0){
        if(month==2 && (year%4==0 && year%100!=0 || year%400==0))
            return 29 ;
        else if(month == 2)
            return 28 ;
        else if(month==8) return 31 ;
        else return 30 ;
    }
    else return 31 ;
}
int main()
{
    int month, year ;
    cout << "Enter month and year: " ;
    cin >> month >> year ;
    cout << noOfDays(month,year) ;
    return 0;
}