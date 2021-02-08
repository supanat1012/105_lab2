#include<stdio.h>
int main()
{
    int a,b,c,sum;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(0<=a<=30)
    {
        if(0<=b<=30)
        {
            if(0<=c<=40)
            {
                sum=a+b+c;

                if(80<=sum)
                    printf("A");
                else if(75<=sum)
                    printf("B+");
                else if(70<=sum)
                    printf("B");
                else if(65<=sum)
                    printf("C+");
                else if(60<=sum)
                    printf("C");
                else if(55<=sum)
                    printf("D+");
                else if(50<=sum)
                    printf("D");
                else
                    printf("F");


            }
        }
    }

}
