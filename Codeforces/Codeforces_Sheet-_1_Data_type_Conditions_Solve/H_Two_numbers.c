#include<stdio.h>
int main()
{
    int A,B,D,E;
    float C,F,G;
    scanf("%d %d",&A,&B);
 
    C = (float)A/(float)B;
    D = C;
    E = D+1;
 
    F = C-D;
    G = 0.5;
 
 
    printf("floor %d / %d = %d\n",A,B,D);
 
    if(C==D)
    {
         printf("ceil %d / %d = %d\n",A,B,D);
 
    }
    else
    {
         printf("ceil %d / %d = %d\n",A,B,E);
 
    }
 
    if(F<G)
    {
        printf("round %d / %d = %d\n",A,B,D);
    }
    else
    {
        printf("round %d / %d = %d\n",A,B,E);
    }
 
 
 
 
 
 
 
 
}
