#include<stdio.h>
int main(){

float sp, cp, a;

printf("enter the selling price of an item");
scanf("%f", &sp);
printf("enter the cost price of an item");
scanf("%f", &cp);

if (cp > sp)
{
 printf("its a lose");
}
 else
 {
 printf("its a profit");
 }
    return 0;
}