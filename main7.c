#include<stdio.h>
int main(){

  int a1, a2, a3;
   printf(" enter the angle of a triangle: \n");
   scanf("%d %d %d",&a1, &a2, &a3);

if (a1+a2+a3==180)
{
  printf("the angles forms a triangle, which is true");
}
 else{
    printf("ERROR");
 }

    return 0;
}