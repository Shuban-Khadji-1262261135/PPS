  #include <stdio.h>

int main(){
    int row , col , i , j ;
    
    printf(" Enter Rows of Matrix ");
    scanf(" %d " , &row);
    printf("  Enter Column of Matrix ");
    scanf(" %d " , &col);
    
    int sensor1[row][col];
    int sensor2[row][col];
    int combined_sensor[row][col];
    
    printf(" Enter elements of sensor1 : \n");
    
    for(i = 0 ; i < row ; i++){
      for(j = 0 ; j < col ; j++ ){
         scanf( " %d " , &sensor1[i][j]);
         }
         }
   printf(" Enter Elements of sensor2 : \n");
   for(i = 0; i < row ; i++){
     for(j = 0; j < col ; j++){
        scanf( " %d " , &sensor2[i][j]);    
        }
        }
     printf("\n Sum is : \n") ;  
        for( i = 0 ; i < row ; i++ ){
          for( j = 0; j < col ; j++ ){
            combined_sensor[i][j] = sensor1[i][j] + sensor2[i][j];
            printf(" %d " , combined_sensor[i][j]); 
            }
            printf(" \n ");
            }
            
    printf(" \n Subtraction is : \n");
    for( i = 0 ; i < row ; i++ ){
          for( j = 0; j < col ; j++ ){
            combined_sensor[i][j] = sensor1[i][j] - sensor2[i][j];
            printf(" %d " , combined_sensor[i][j]); 
            }
            printf(" \n ");
            }
               
            
            return 0;  
    
} 
