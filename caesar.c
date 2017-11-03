#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc,string argv[])
{
    int i=0;
    string s;
    int k;
    int f;
    if(argc==2)
    {
        s=get_string("plain text: ");
        k=atoi(argv[1]);
        k=k%26;
        printf("ciphertext: ");
        while(i<strlen(s))
        {
          if(isalpha(s[i]) && k>=0)
          {
              if(isupper(s[i]))
          {
              f=(char)s[i]+k;
              if((char)s[i]+k>90)
              {
                  f=(char)s[i]+k-26;
              }
           printf("%c",f);
          }
          else if(islower(s[i]))
          {
              f=(char)s[i]+k;
              if((char)s[i]+k>122)
              {
                  f=(char)s[i]+k-26;
          }
          printf("%c",f);
          }
          else
          {
              printf("%c",s[i]);
          }
        }
        i+=1;
    }
    }
    else
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    printf("\n");
}
