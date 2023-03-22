#include<stdio.h>
 
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int c,int d)
{
    if(c<d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
 
int main()
{
    int A,B,C,Max1,Max2,Min1,Min2;
    scanf("%d %d %d",&A,&B,&C);
 
    Max1 = max(A,B);
    Max2 = max(Max1,C);
 
    Min1 = min(A,B);
    Min2 = min(Min1,C);
 
    printf("%d %d",Min2,Max2);
 
 
 
 
 
}
