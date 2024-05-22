/*Find Permutations in which n people can occupy r seats in a classroom*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fact = 1 ;
    for(int i=2; i<=num; i++){
        fact *= i ;
    }
    return fact ;
}

int main()
{
    int n , r ;
    cout << "Enter no of people and no of seats: " ;
    cin >> n >> r ;
    cout << factorial(n)/factorial(n-r) ;
    return 0;
}