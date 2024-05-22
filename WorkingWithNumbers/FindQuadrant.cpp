#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findQuadrant(int x, int y){
    if(x>=0 && y>=0) return 1 ;
    else if(x<0 && y>=0) return 2 ;
    else if(x<0 && y<0) return 3 ;
    else return 4 ;
}

int main()
{
    int x , y ;
    cout << "Enter coordinates: " ;
    cin >> x >> y ;
    cout << "The quadrant is: " << findQuadrant(x,y) ;
    return 0;
}