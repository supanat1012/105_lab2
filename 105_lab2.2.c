#include<stdio.h>
int main()
{
    int a,c;
    float b,sum,pay1=199,pay2=299;
    char ch;

    scanf("%c",&ch);
    scanf("%d.%f",&a,&b);
    b=b/100;
    sum=a+b;

    printf("%.2f",sum);


    if(ch=='A')
    {
        if(sum>200)
        {

        }
        else
        {
            printf("%.2f",pay1);
        }

    }
    else if(ch=='B')
    {

    }

}
