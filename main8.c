#include<stdio.h>
int main(){
  
  int num;
  printf("Enter any number:\n");
  scanf("%d", &num);

  if (num < 0)

  {
    num = (-1)* num;
  }
  printf("Absolute number=%d\n", num);

    return 0;
}