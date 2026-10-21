// search for given number , counting same number , and finding second largest and second smallest 

#include <stdio.h>

int main(){

int rows , col ;

printf("Enter Rows :");
scanf("%d" , &rows);
printf("Enter Columns :");
scanf("%d", &col);

int arr[rows][col];
printf(" Enter Elements of array \n");

for(int i = 0; i < rows ; i++){
 for(int j = 0; j < col ; j++){
 scanf("%d" , &arr[i][j]);
 }
 }
 
 
 int num ; 
 int count = 0;
 printf(" Enter Number to search and to count \n");
 scanf("%d" , &num);
 
 
for(int i = 0; i < rows ; i++){
 for(int j = 0; j < col ; j++){
  if( num == arr[i][j] ){
     printf(" The number is on index %d , %d ", i , j);
     count++ ; 
     }
 }
 }
  printf(" The number of times %d is repeated is %d", num , count );
  
  
 
 
 
     int largest = arr[0][0];
    
    
    int second_largest = arr[0][0]; 
    int found_distinct_second = 0; 

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            
          
            if (arr[i][j] > largest) {
                second_largest = largest;
                largest = arr[i][j];
                found_distinct_second = 1; 
            } 
            
           
            else if (arr[i][j] != largest) {
                if (!found_distinct_second || arr[i][j] > second_largest) {
                    second_largest = arr[i][j];
                    found_distinct_second = 1;
                }
            }
        }
    }

   
    if (!found_distinct_second) {
        printf("\nThere is no distinct second largest element (all elements are equal).\n");
    } else {
        printf("\nThe largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }
  
 }
 
 
 
 
 
    
    
