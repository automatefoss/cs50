#include<stdio.h>
#include<cs50.h>
/* program that takes shower time and gives water used in bottles*/
int main(void)
{
printf("Minutes: ");
int Minutes = get_int();
int Bottles=Minutes*12;
printf("Bottles: %i\n",Bottles);
}
