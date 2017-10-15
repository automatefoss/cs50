#include<stdio.h>
#include<cs50.h>
#include<string.h> // string operations header file
#include<ctype.h>
int main(void)
{
    string a;
    a=get_string();
    char s;
    int n=0;
    while(n<strlen(a))
    {
        if(n==0)
        {
            printf("%c",toupper(a[n]));
        }
        if((char)a[n] == 32)
        {
            s=a[n+1];
            if(a[n+1]>='a'&& a[n+1]<='z')
            {
            printf("%c",(char)a[n+1]-32);
            }
            else
           {
            printf("%c",a[n+1]);
            }
        }
    n++;
    }
    printf("\n");
}
