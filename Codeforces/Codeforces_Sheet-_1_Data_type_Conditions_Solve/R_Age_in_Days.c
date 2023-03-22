#include<stdio.h>
int main()
{
    int N,Y,M,D;
 
    scanf("%d",&N);
 
    Y = N/365;
    N = N%365;
 
    M = N/30;
    N = N%30;
 
    D = N;
 
    printf("%d years\n%d months\n%d days\n",Y,M,D);
 
    return 0;
}
