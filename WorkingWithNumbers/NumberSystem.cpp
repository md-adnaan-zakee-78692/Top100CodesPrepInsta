#include <iostream>
#include <math.h>
using namespace std ;

int binToDec(int binary){
    int i = 0 ;
    int dec = 0 ; 
    while(binary){
        int ld = binary % 10 ;
        dec += ld * pow(2,i) ;
        i++ ;
        binary /= 10 ;
    }
    return dec ;
}

int binToOct(int binary_num){
    int oct_res = 0 , place_val = 1, count = 0, group_val = 0, i=0, base = 1;
    while(binary_num){
        int ld = binary_num % 10 ;
        count ++ ;
        group_val += (ld * base) ;
        base *= 2 ;
        binary_num /= 10 ;

        if(count == 3 || binary_num == 0){
            oct_res += place_val* group_val ;
            count = 0;
            group_val = 0 ;
            place_val *= 10 ;
            base = 1;
        }
    }
    return oct_res ;
}

int decToBin(int decimal_num){
    int bin = 0, weight = 1;     //ans=ans*10+digit-make no from digits
    while(decimal_num){          //ans=digit*(10)^i+ans-make rev no from digits
        int bit = decimal_num & 1 ;
        bin = bit * weight + bin ;
        weight *= 10 ;
        decimal_num = decimal_num >> 1 ;
    }
    return bin ;
}

string decToHex(int dec_num){
    string helper = "0123456789ABCDEF" ;
    string hex_res = "" ;
    while(dec_num){
        int rem = dec_num % 16 ;
        hex_res = helper[rem] + hex_res ;
        dec_num /= 16 ;
    }
    return hex_res ;
}

int hexToDec(string hex_num){
    int dec = 0 , base = 1 ;
    for(int i=hex_num.length()-1; i>=0; i--){
        if(hex_num[i]>='0' && hex_num[i]<='9'){ // 0=48
            dec += (hex_num[i]-48)*base ;
        }
        else if(hex_num[i]>='A' && hex_num[i]<='F'){ // A=65
            dec += (hex_num[i]-55)*base ;
        }
        base *= 16 ;
    }
    return dec ;
}

int octalToDec(int octal_num){
    int dec = 0 , weight = 1 ;
    while(octal_num){
        int ld = octal_num % 10 ;
        dec += ld*weight ;
        weight *= 8 ;
        octal_num /= 10 ;
    }
    return dec ;
}

int decToOct(int dec_num){
    int oct_res = 0 , weight = 1 ;
    while(dec_num){
        int rem = dec_num % 8 ;
        oct_res = weight * rem + oct_res ; 
        weight *= 10 ;
        dec_num /= 8 ;
    }
    return oct_res ;
}

int main(){
    int choice, user_num;
    string user_inp ;
    cout << "1.Binary to Decimal" << endl << "2.Binary to Octal" << endl << "3.Decimal to Binary" << endl << "4.Decimal to Hexadecimal" << endl << "5.Hexadecimal to Decimal" << endl << "6.Octal to Decimal" << endl << "7.Decimal to Octal" << endl ;
    cout << "Choose an option: " ;
    cin >> choice ;
    switch (choice){
        case 1:
            cout << "Enter binary number: " ;
            cin >> user_num ;
            cout << binToDec(user_num) ;
            break ;
        
        case 2:
            cout << "Enter binary number: " ;
            cin >> user_num ;
            cout << binToOct(user_num) ;
            break ;

        case 3:
            cout << "Enter decimal number: " ;
            cin >> user_num ;
            cout << decToBin(user_num) ;
            break ;

        case 4:
            cout << "Enter decimal number: " ;
            cin >> user_num ;
            cout << decToHex(user_num) ;
            break ;

        case 5:
            cout << "Enter Hexadecimal number: " ;
            cin >> user_inp ;
            cout << hexToDec(user_inp) ;
            break ;

        case 6:
            cout << "Enter Octal number: " ;
            cin >> user_num ;
            cout << octalToDec(user_num) ;
            break ;

        case 7:
            cout << "Enter Decimal number: " ;
            cin >> user_num ;
            cout << decToOct(user_num) ;
            break ;
    }
    return 0 ;
}