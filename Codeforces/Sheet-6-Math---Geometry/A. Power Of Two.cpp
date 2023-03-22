#include<iostream>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
 
 
    int cnt=0;
    while(n!=0)
    {
        if(n&1!=0)
        {
            cnt++;
        }
        n=n>>1;
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
