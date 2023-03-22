#include<stdio.h>
int main()
{

    float n,j;
    int m;

    scanf("%f",&n);

    m = n;
    j = n - m;

    if(j!=0)
    {
        printf("float %d %.3f",m,j);
    }
    else
    {
        printf("int %d",m);
    }
    return 0;
}
