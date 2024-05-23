    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

    void roots(float a, float b, float c){
        float det = (b*b)-(4*a*c) ;
        if(det>0){
            float root1 = (-b+sqrt(det))/(2*a) ;
            float root2 = (-b-sqrt(det))/(2*a) ;
            cout << root1 << "   " << root2 << "   " ;
        }
        else if(det==0){
            float root1 = -b/(2*a) ;
            cout << root1 ;
        }
        else{
            cout << -b/(2*a) <<"+" << (sqrt(-det))/(2*a)<< "i" << "   " ;
            cout << -b/(2*a) <<"-"  << (sqrt(-(det)))/(2*a) << "i" ;
        }
    }
    int main()
    {
        float a, b, c;
        cout << "Enter a, b and c: " ;
        cin >> a >> b >> c ;
        roots(a,b,c) ;
        return 0;
    }
