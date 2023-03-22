#include<stdio.h>
#include<math.h>
int main()
{
    int N,c,n;
    scanf("%d",&n);
 
    c = log10(n);
 
    N = n/pow(10,c);
     if(N%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
 
 
 
 
}
