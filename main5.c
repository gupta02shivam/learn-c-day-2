#include<stdio.h>
int main(){
 int a, number, num=5, rev=0;

   printf("enter the 5 digit number, whose reverse you want:\n",a);
   scanf("%d", &number);

   for (int i = 0; i < 5; i++)
   {
    num = number % 10;
    rev = (rev*10) + num;
    number = number / 10;
   }
   
printf("reverse of the 5 digit number is %d", rev);

    return 0;
}