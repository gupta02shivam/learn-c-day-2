#include<stdio.h>
int main()
{
  int a;
   printf("enter the year, you want to know whether its leap or not: \n");
   scanf("%d", &a);
   if (a%4==0 && a%100!=0 || a%400==0)
   {
    printf("entered year %d is a leap year", a);
   }
   
else{
    printf("%d is not a leap year", a);
}

    return 0;
}