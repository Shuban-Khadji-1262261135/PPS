#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
struct Robot {
    int id;
    char type[40];
    float capacity ;
    float load;
    float time;
    float util_load ;
    
    
};

int num ;
printf("Enter Number of Robots :");
scanf("%d",&num);

printf("\n");

struct Robot robots[num];



for(int i = 0; i < num ; i++){
    printf("Enter id : ");
    scanf("%d", &robots[i].id);
    
    while (getchar() != '\n'); 

    printf("Enter Type : ");
    fgets(robots[i].type, sizeof(robots[i].type) , stdin);
    
    
    
    printf("Enter Load Capacity : ");
    scanf("%f" , &robots[i].capacity);
    
    printf("Enter load :");
    scanf("%f" , &robots[i].load);
    
    printf("Enter operating time :");
    scanf("%f" , &robots[i].time);
    
    robots[i].util_load = (robots[i].load / robots[i].capacity)* 100;
    
    
}
 printf("\n");

for(int i = 0 ; i < num ; i++){
    printf("Robot number %d \n", i+1 );
    
    printf("Robot id : %d \n", robots[i].id);
    printf("Robot type: %s \n", robots[i].type);
    printf("Robot Load Capacity : %.2f \n", robots[i].capacity);
    printf("Robot load : %.2f \n", robots[i].load);
    printf("Time Operating : %.2f \n" , robots[i].time);
    
    if(robots[i].load > robots[i].capacity){
        printf("Error : OVERLOAD!");
    }
    else{
    printf("LOAD IS IN LIMIT \nLoad utilization is %.2f", robots[i].util_load);
    }
    
  printf("\n");
}








}
