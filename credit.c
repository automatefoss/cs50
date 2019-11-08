#include<stdio.h>
#include<cs50.h>
int main(void)
{
long long int k;
    int d=0;
    int s=0;
    int p=0;
    int o=0;
    int a[2];
    do
    {
        printf("Number:");
        k=get_long_long();
    }
    while(k<0);
    while(k>0)
    {
        if(k/100==0 && k>9)
        {
            o=k;
            a[1]=o%10;
            o=o/10;
            a[0]=o%10;
        }
        if(d%2!=0)
        {
          p=(k%10)*2;
          if(p>0)
          {
              s+=p%10;
              p=p/10;
              s+=p%10;
          
        }
        else
        {
          s+=k%10;
        }
        d+=1;
        k=k/10;
    }


    if(s%10==0)
    {

        if(a[0]==3)
        {

            if((a[1]==4||a[1]==7))
            {
            printf("AMEX\n");
            }
        }
        else if(a[0]==5&&(a[1]==1||(a[1]==2||(a[1]==3||(a[1]==3||(a[1]==4||a[1]==5))))))
        {
            printf("MASTERCARD\n");
        }
        else if(a[0]==4)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
s
