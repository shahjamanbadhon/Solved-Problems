#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    long double A,B,C,D;
    cin>>A>>B>>C>>D;



    long double E = B/10000000000000;
    long double F= D/10000000000000;



    if (pow(A,E)> pow(C,F))
        cout<<"YES";
    else
        cout<<"NO";

}
