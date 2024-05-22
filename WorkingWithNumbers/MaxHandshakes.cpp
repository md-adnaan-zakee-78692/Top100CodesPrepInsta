#include <iostream>      //1st person - n-1 people to handshake with
#include <bits/stdc++.h> //2nd person = n-2
using namespace std;     //3rd person = n-3, and so on

int maxHandshakes(int n){
    return (n * (n-1)) / 2 ;
}
int main()
{
    int n ;
    cout << "Enter no of people: " ;
    cin >> n ;
    cout << maxHandshakes(n) ;
    return 0;
}