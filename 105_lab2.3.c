#include<stdio.h>
int main()
{
    int a,b,c,B[9],save;
    char A[9];

    scanf("%d %d %d",&a,&b,&c);
    fflush(stdin);

    if(a>b)
    {
        save=a;
        a=b;
        b=save;
    }
    if(a>c)
    {
        save=a;
        a=c;
        c=save;
    }
    if(b>c)
    {
        save=b;
        b=c;
        c=save;
    }

    scanf("%s",A);
    for(i=0;i<3;i++)
    {
        if(A[i]=='A');
            B[i]=a;
        else if(A[i]=='B');
            B[i]=b;
        else if(A[i]=='C');
            B[i]=c;
    }




}
