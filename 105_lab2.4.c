#include<stdio.h>
int main()
{
    int a,b;
    char A;

    scanf("%c",&A);
    fflush(stdin);
    scanf("%d",&b);


    if(b%5==0 && b%2!=0)
        printf("%c",92);
    if(b%2==0)
        a=1;
    else
        a=0;


    if(a==1)
    {
        if(A<='I')
            printf("{@_@}");
        else if(A<='R')
            printf("{*v*}");
        else if(A<='Z')
            printf("{x_x}");
    }

    else if(a==0)
    {
        if(A<='I')
            printf("(^_^)");
        else if(A<='R')
            printf("(*o*)");
        else if(A<='Z')
            printf("(T_T)");
    }

    if(b%5==0 && b%2!=0)
        printf("%c",47);

}
