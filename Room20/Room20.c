// Room20.c
//Cesar Gutierrez
//Lab10
#include <stdio.h>
#include <stdlib.h>
void option1(option);

int main(void)
{
    int option;
    printf("You enter the door labled Room 20");
    
    printf("You walk through the door and enter a long narrow hallway\n");
    
    option1(option);
    
}

void option1(option)    //Function to Swaps Array Values
{
    printf("Press: \n"
           "1: Just Stand there\n"
           "2: Walk Halfway down the hall and look at the clock to your left\n"
           "3: Walk to the end of the hall and look at the table to your left\n"
           "4: Walk to the end of the hall and turn right towards the rest of the hall\n");
    scanf("%d",&option);
}
