#include <iostream>
#include <math.h>
using namespace std ;

bool isArmstrong(int num){
    int no_of_dig = 0, temp = num ;
    double sum = 0 ;
    while(temp){
        no_of_dig ++ ;
        temp /= 10 ;
    }
    temp = num ;
    while(temp){
        int ld = temp % 10 ;
        sum += pow(ld,no_of_dig) ;
        temp /= 10 ;
    }
    return sum == num ;
}

void armstrongNumbers(int start, int end){
    for(int i=start; i<=end; i++){
        if(isArmstrong(i)) cout << i << " " ;
    }
}

int main(){
    int start, end ;
    cout << "Enter the range: " ;
    cin >> start >> end ;
    armstrongNumbers(start, end) ;
}