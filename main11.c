#include<stdio.h>
#include<math.h>
int main(){
    int x, y, x1, y1, rad, dist;

    printf("Enter the x,y coordinates of the center of a circle\n");
    scanf("%d %d", &x, &y);

     printf("Enter the radius of the circle\n");
     scanf("%d", &rad);

     printf("Enter the point coordinates of the of circle\n");
     scanf("%d %d", &x1, &y1);

     dist= sqrt(pow((x1-x),2) + pow((y1-y),2));

      if (dist>rad)
      {
        printf("Points lies outside the circle");
      }

       if (dist<rad)
      {
        printf("Points lies inside the circle");
      }
       if (dist=rad)
      {
        printf("Points lies on the circle");
      }


    return 0;
}