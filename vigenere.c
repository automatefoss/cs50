#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,string argv[])
{
    int k;
    string s;
    int f;
    int m=0;
    int p=0;
        for(int i=0;i<strlen(argv[1]);i++)
        {
            if(isalpha(argv[1][i]))
            {
             p+=1;
            }
        }
        if(p==strlen(argv[1]) || argc==2)
        {
            s=get_string("Plaintext: ");
            printf("ciphertext: ");
        for(int j=0;j<strlen(s);j++)
        {
            if(isalpha(argv[1][m]))
            {
            k=(char)argv[1][m];
            if((k>64 && k<91)||(k>96 && k<123))
            {
                if(k>64 && k<91)
                {
                    k=k-65;
                }
                else
                {
                    k=k-97;
                }
            }
            f=(char)s[j]+k;
            if(isupper(s[j]))
            {
                if(f>90)
                {
                    f=f-26;
                }
                printf("%c",f);
            }
            else if(islower(s[j]))
            {
                if(f>122)
                {
                    f=f-26;
                }
                printf("%c",f);
            }
            else
            {
              printf("%c",s[j]);
            }
            }
            else
            {
                return 0;
                break;
            }
            m+=1;
            if(m==strlen(argv[1]))
            {
                m=0;
            }
        }
        }
    else
    {
        printf("Usage : ./caesar k");
        return 1;
    }
printf("\n");
return 0;
}
