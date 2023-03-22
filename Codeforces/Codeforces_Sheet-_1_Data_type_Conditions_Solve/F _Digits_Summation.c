#include<stdio.h>
int main()
{
    long long M,N,sum;
 
    scanf("%lld %lld",&M,&N);
 
    sum = (M%10) + (N%10);
 
    printf("%lld",sum);
}
