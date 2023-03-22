#include<stdio.h>
int main()
{
    int A,B,C,D;
    char S,Q;
 
    scanf("%d",&A);
    getchar();
    scanf("%c",&S);
    getchar();
    scanf("%d",&B);
    getchar();
    scanf("%c",&Q);
    getchar();
    scanf("%d",&C);
 
    if(S == '+')
    {
        D = A+B;
    }
    else if(S == '-')
    {
        D =A-B;
    }
    else if(S == '*')
    {
        D =A*B;
    }
 
    if(C == D)
    {
        printf("Yes\n");
    }
    else{
        printf("%d\n", D);
    }
 
 
    return 0;
}
