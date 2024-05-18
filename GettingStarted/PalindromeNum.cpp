#include <iostream>
using namespace std ;

bool isPalindrome(int num){
    int reverse_num = 0, temp = num ;
    while(temp){
        int ld = temp % 10 ;
        reverse_num = reverse_num * 10 + ld ;
        temp /= 10 ;
    }
    return reverse_num == num ;
}

int main(){
    int num ;
    cout << "Enter a number: " ;
    cin >> num ;
    cout << isPalindrome(num) ;
}