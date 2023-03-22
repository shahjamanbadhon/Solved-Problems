#include<stdio.h>
#include<string.h>
int main()
{
    char F1[200];
    char F2[200];
    char S1[200];
    char S2[200];
 
 
    scanf("%s %s",F1,S1);
    scanf("%s %s",F2,S2);
 
    int c = 0;
    int b = strlen(S1);
 
for(int i = 0; i<=b; ++i)
{
     if(S1[i]==S2[i])
    {
        c = 0;
    }
    else
    {
        c+=1;
        break;
    }
 
}
 
 if(c == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
 
 
}
