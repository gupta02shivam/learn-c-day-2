#include<stdio.h>
int main(){
  float x1, x2, x3, y1, y2, y3;
  float m, n;

  printf("Enter the first coordinate\n");
  scanf("%f %f", &x1, &y1);

  printf("Enter the second coordinate\n");
  scanf("%f %f", &x2, &y2);

  printf("Enter the third coordinate\n");
  scanf("%f %f", &x3, &y3);

  m=(y2-y1)/(x2-x1);
  n=(y3-y2)/(x3-x2);

  if (m==n)
  {
    printf("All points lie on a straight line");
  }
  
 else{
    printf("All points donot lie on the same straight line ");
 }

    return 0;
}