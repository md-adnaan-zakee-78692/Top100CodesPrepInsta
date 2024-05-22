/* Goldbach’s Conjecture states that any even number greater than 2 can be expressed as a sum of two primes. */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num == 1) return false ;
    if(num==2 || num==3) return true ;
    if(num%2==0 || num%3==0) return false ;
    for(int i=5; i*i<=num; i=i+6){
        if(num*i==0 || num%(i+2)==0) return false ;
    }
    return true ;
}

void sumOfPrimes(int num){
    bool flag = false ;
    for(int i=1; i<=num/2; i++){
        if(isPrime(i)==1 && isPrime(num-i)==1){
            cout << i <<"+" << num-i << endl ;
            flag = true ;
        }
    }
    if(flag==false) cout << "Cannot be expressed !" ;
}

int main()
{
    int num ;
    cout << "Enter the num: " ;
    cin >> num ;
    sumOfPrimes(num) ;
    return 0;
}