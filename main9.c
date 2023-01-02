#include<stdio.h>
int main(){

float l, b, p, a;
 printf("enter the length of rectangle:\n");
 scanf("%f", &l);
 
printf("enter the breadth of rectangle:\n");
 scanf("%f", &b);

p=2*(l+b);
a=(l*b);

if (p>a)
{
  printf("perimeter of the rectangle is greater than its area..");
}

if (p<a)
{
  printf("perimeter of the rectangle is smaller than its area..");
}

 if(p=a)
 {
  printf("perimeter of the rectangle is equal with its area..");
 }

    return 0;
}