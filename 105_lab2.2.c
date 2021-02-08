#include<stdio.h>
int main()
{

    float sum,pay1=199,pay2=299;
    char ch;

    scanf("%c",&ch);
    scanf("%f",&sum);


    if(ch=='A')
    {
        if(sum>200)
        {
            pay1=pay1+(((int)sum-200)*3);
            printf("%.2f",pay1);
        }
        else
        {
            printf("%.2f", pay1);
        }

    }
    else if(ch=='B')
    {
        if(sum>400)
        {
            pay2=pay2+((sum-400)*2);
            printf("%.2f",pay2);
        }
        else
        {
            printf("%.2f",pay2);
        }
    }



}
