#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int replaceZeroes(int num){
    int place = 1 , temp = num;
    while(temp){
        int ld = temp%10 ;
        if(ld==0)
            num = num + place ;
        place *= 10 ;
        temp /= 10 ;
    }
    return num ;
}

int main()
{
    int num ;
    cout << "Enter a number: " ;
    cin >> num ;
    cout << replaceZeroes(num) ;
    return 0;
}