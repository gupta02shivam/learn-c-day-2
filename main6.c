#include<stdio.h>
int main(){

   int Ram, Shyam, Ajay;

   printf("Enter the age of three persons: \n");
   scanf("%d %d %d", &Ram, &Shyam, &Ajay);

   if (Ram>Shyam && Shyam>Ajay)
   {
    printf("Ajay is the youngest");
   }


   if (Ajay>Ram && Ram>Shyam)
   {
    printf("Shyam is the youngest");
    
   }

    if (Shyam>Ajay && Ajay>Ram)
   {
    printf("Ram is the youngest");
   }

   

    return 0;
}
