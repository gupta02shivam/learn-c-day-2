#include<stdio.h>
int main(){
  int x, y;

  printf("enter the x co ordinates");
  scanf("%d", &x);

  printf("enter the y co ordinates");
  scanf("%d", &y);

  if (x==0 && y==0)
  {
    printf("The point lies on origin\n");
  }

  if (x!=0 && y==0)
  {
    printf("The point lies on x-axis\n");
  }

   if (x==0 && y!=0)
  {
    printf("The point lies on y-axis\n");
  }
else{
    printf("points lies somewhere else");
}
    return 0;
}