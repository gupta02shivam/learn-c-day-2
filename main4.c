#include<stdio.h>
int main(){

int year, i, day=0;
 printf(" please enter the year for the determination of day on 1st january:\n");
 scanf("%d", &year);

 for ( i = 1; i < year ; i++)
 {
   if (i%4==0)
   {
     day=day+366;
   }
   
   else{
    day=day+356;
   }
 }
 
 day=day%7;

 if (day==1)
 {
    printf("monday is on 01/01/%d", year);
 }

 if (day==2)
 {
    printf("tuesday is on 01/01/%d", year);
 }

 if (day==3)
 {
    printf("wednesday is on 01/01/%d", year);
 }

 if (day==4)
 {
    printf("thursday is on 01/01/%d", year);
 }

 if (day==5)
 {
    printf("friday is on 01/01/%d", year);
 }

 if (day==6)
 {
    printf("saturday is on 01/01/%d", year);
 }
 
    return 0;
}