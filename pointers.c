#include <stdio.h>

int swap(int *a,int *b){
  
  int temp = *a;
  *a = *b;
  *b = temp;
  
  
  return 0;


}

int main(){
   int motor1;
   int motor2 ;
   printf("Enter speed of Motor 1 :");
   scanf("%d",&motor1);
   
   printf("Enter speed of Motor 2 :");
   scanf("%d",&motor2);
   
   int *p1 = &motor1;
   int *p2 = &motor2;
   
   printf("\nSpeed of Motor 1 is %d and Speed of Motor 2 is %d",motor1,motor2);
   printf("\nAdress of Speed of Motor 1 is %p and Adress of Motor 2 is %p",p1,p2); 
   
   swap(p1,p2);
printf("\nSpeed of Motor 1 is %d and Speed of Motor 2 is %d",motor1,motor2);
   printf("\nAdress of Speed of Motor 1 is %p and Adress of Motor 2 is %p",p1,p2); 

}
