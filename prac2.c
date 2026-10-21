#include <stdio.h>

int main(){

 int num;
 int count = 0;
 
 printf(" Enter Number to check divisibility by 5 : ");
 scanf("%d" , &num);
 
 for(int i = 1 ; i <= num ; i++){
 
   if( i % 5 == 0){
      count++;
      }
      }
      
      printf(" The count of numbers divisible is : %d", count);
      }
      
