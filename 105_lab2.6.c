#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i;
    char A[]={};

    scanf("%s",A);

    a=strlen(A);
    printf("---%d---",a);
    printf("%c",A[1]);
    for(i=0;i<a;i++)
    {
        if(A[i]==0)
            printf("%c-Zero");
        else if(A[i]==1)
            printf("%c-One");

    }

}
