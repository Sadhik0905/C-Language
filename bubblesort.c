#include<stdio.h>

int main(){

   int count, temp, i, j, number[30],flag=-1;

   printf("How many numbers are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d numbers: ",count);

   for(i=0;i<count;i++)
   scanf("%d",&number[i]);

   /* This is the main logic of bubble sort algorithm 
    */
   for(i=count-2;i>=0;i--){
      if(flag==0)
         break;
      for(j=0;j<=i;j++){
         flag = 0;
        if(number[j]>number[j+1]){
           flag = 1;
           temp=number[j];
           number[j]=number[j+1];
           number[j+1]=temp;
        }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
