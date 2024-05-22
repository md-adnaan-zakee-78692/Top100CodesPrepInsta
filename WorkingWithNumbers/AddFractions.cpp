#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2){
    while(num2 != 0){
        int rem = num1 % num2 ;
        num1 = num2 ;
        num2 = rem ;
    }
    return num1 ;
}

int lcm(int num1, int num2){
    return (num1*num2) / gcd(num1, num2) ;
}

void addFractions(int num1, int den1, int num2, int den2){
    int denomenator = lcm(den1, den2) ;
    int numerator = (denomenator/den1)*num1 + (denomenator/den2) * num2 ;
    int gcd_of_result = gcd(numerator,denomenator) ;
    numerator /= gcd_of_result ;    // simplifying
    denomenator /= gcd_of_result ;  // the fraction
    cout << numerator << "/" << denomenator ;
}

int main()
{
    int num1,num2,den1,den2 ;
    cout << "Enter fractions: " ;
    cin >> num1 >> den1 >> num2 >> den2 ;
    addFractions(num1,den1,num2,den2) ;
    return 0;
}