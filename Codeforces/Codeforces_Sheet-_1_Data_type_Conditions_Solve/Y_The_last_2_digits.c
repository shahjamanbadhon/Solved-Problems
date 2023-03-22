#include<stdio.h>
int main()
{
    long long a,b,c,d,last_2_dgt;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
 
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
 
    last_2_dgt=a*b*c*d;
 
    if(last_2_dgt>=2 && last_2_dgt<=9)
    {
        printf("%lld\n",last_2_dgt);
    }
    else
    {
        last_2_dgt=last_2_dgt%100;
        if(last_2_dgt<=9)
        {
            printf("0%lld\n",last_2_dgt);
        }
        else
        {
            printf("%lld\n",last_2_dgt);
        }
    }
    return 0;
}
