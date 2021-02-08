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

    //printf("%.2f",sum);


    if(ch=='A')
    {
        if(sum>200)
        {
            pay1=pay1+((sum-200)*3);
            printf("%.2f",pay1);
        }
        else
        {
            printf("%.2f",pay1);
        }

    }
    else if(ch=='B')
    {
        if(sum>400)
        {
            pay2=pay2+((sum-299)*2)+(b*2);
            printf("%.2f",pay2);
        }
        else
        {
            printf("%.2f",pay2);
        }
    }



}
