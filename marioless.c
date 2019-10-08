#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a=23;
    int b=0;
    int n;
    printf("Height:");
    n=get_int();
    a=n;
        while(a>23 || (a<23 && a<0))
        {
            b+=1;

            if(b>1)
            {
                printf("Height:");
            }
            n=get_int();
            a=n;
        }
        if(a<=23)
        {
    for(int i=2;i<a+2;i++)
    {
        for(int j=a+1;j>0;j--)
        {
            if(j>=i)
            {
                printf(" ");
            }
                else
                {
                printf("#");
            }
        }
            printf("\n");
    }
        }
}

