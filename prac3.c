#include <stdio.h>

int main(){

//unit coversion

 int choice ;
 
 printf(" Enter choice : \n 1.Kilometre to Metre \n 2. Metre to centimetre \n 3.Kilogram to Gram \n 4.Rupee to Dollar ");
 scanf("%d", &choice);
 
 
 switch(choice){
   case 1 :
   int km ;int m = 0;
   printf(" \n Enter km : ");
   scanf("%d" , &km);
   
   m = km * 1000 ;
   
   printf("%d" , m);
   break;
   
   case 2 : 
   int metre ; int cm = 0;
   
   printf(" \n Enter m : ");
   scanf("%d", &metre);
   
   cm = metre * 100;
   printf("%d", cm);
   break;
   
   case 3:
   int kg ;
   int g = 0;
   
   printf("\n Enter kg :");
   scanf("%d" , &kg);
   
   g = kg * 1000;
   printf("%d" , g);
   break;
   
   case 4:
   float rupees ;
   float dollars = 0;
   
   float exchangeRate = 96.02;
   
   printf("Enter amount in Indian Rupees (INR): ");
    if (scanf("%f", &rupees) != 1 || rupees < 0) {
        printf("Please enter a valid positive number.\n");
        
    }

    // Conversion calculation
    dollars = rupees / exchangeRate;

    // Display output formatted to 2 decimal places
    printf("\n%.2f INR = %.2f USD (Exchange Rate: 1 USD = %.2f INR)\n", rupees, dollars, exchangeRate);
    
    break; 
    
    default : 
    printf(" Enter valid choice :");
    
    }
    
    return 0; }
    
   
   
   
   
   
