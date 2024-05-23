#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string numToWord(int n, string s)
{
    string res = "";
    string ones[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};
    string tens[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
    if (n > 19)
    {
        res += tens[n / 10] + ones[n % 10];
    }
    else
    {
        res += ones[n];
    }
    if (n)
        res += s;
    return res;
}

string convertToWords(long n)
{
    string res;
    res += numToWord((n / 10000000), "crore ");
    res += numToWord((n / 100000) % 100, "lakh ");
    res += numToWord((n / 1000) % 100, "thousand ");
    res += numToWord((n / 100) % 10, "hundred ");
    if (n > 100 and n % 100)
        res += "and ";
    res += numToWord(n % 100, "");
    return res;
}

int main()
{
    long num;
    cout << "Enter a number: ";
    cin >> num;
    cout << convertToWords(num);
    return 0;
}