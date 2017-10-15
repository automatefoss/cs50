#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float a;
    int b=0;
    int c=0;
    do
    {
        if(b==0)
        {
            printf("O hai! How much change is owed ?\n");
        }
        if(b>0)
            {
                printf("How much change is owed?\n");
            }
            b+=1;
        a=get_float();
    }
    while(a<0);
    b=round(a*100);
        if(b>=25)
        {
            c+=b/25;
            b=b%25;
        }
        if(b>=10)
        {
            c+=b/10;
            b=b%10;
        }
        if(b>=5)
        {
            c+=b/5;
            b=b%5;
        }
        if(b>=1)
        {
            c+=b/1;
            b=b%1;
        }
        printf("%i\n",c);
}




