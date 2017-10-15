#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int n;
    int b=0;
    printf("Height:");
    n=get_int();
    while(n>23 || n<0)
    {
        b+=1;
        if(b>=1)
        {
            printf("Height:");
            n=get_int();
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n*2+3;j++)
        {
            if(j<n-i+1)
            {
                printf(" ");
            }
                if(j>n-i && j<n+1)
                {
                    printf("#");
                }
                if(j>n && j<n+3)
                {
                printf(" ");
                }
                if(j>n+2 && j<n+i+3)
                {
                    printf("#");
                }
        }
        printf("\n");
    }
}
