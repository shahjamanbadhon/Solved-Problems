#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
 
    int cnt=0;
    if(n<2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=2; i<=sqrt(n);++i)
        {
            if(n%i==0)
            {
                cnt++;
                break;
            }
        }
 
        if(cnt==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
