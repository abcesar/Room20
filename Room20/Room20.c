// Room20.c
//Cesar Gutierrez
//Lab10
#include <stdio.h>
#include <stdlib.h>
void option1();
void optionClock();

int main(void)
{
    printf("You enter the door labled Room 20");
    
    printf("You walk through the door and enter a long narrow hallway\n");
    option1();

}

void option1() //First Options
{
    int options;
    printf("Press: \n"
           "1: Just Stand there\n"
           "2: Walk Halfway down the hall and look at the clock to your left\n"
           "3: Walk to the end of the hall and look at the table to your left\n"
           "4: Walk to the end of the hall and turn right towards the rest of the hall\n");
    scanf("%d",&option);
    
    switch(options)
    {
        case 1:
            option1(option);
            break;
            
        case 2:
            printf("You walk half way down the hall and look right")
            optionClock();

            break;
        case 3:
            printf("You walk to the end of the hall and look left");
            break;
        case 4:
            printf("You walk to the end of the hall and turn right");
            break
    }
}

void optionClock() //First Options
{
    int options;
    printf("The clock is 11:59 PM\n");
    printf("Press: \n"
           "1: Wait\n"
           "2: Look at floor\n"
           "3: Walk to the end of the hall and look at the table to your left\n"
           "4: Walk to the end of the hall and turn right towards the rest of the hall\n");
    scanf("%d",&option);
    switch(options)
    {
        case 1:
            option1(option);
            break;
            
        case 2:
            printf("You notice a piece of a picture")
            break;
        case 3:
            printf("You walk to the end of the hall and look left");
            break;
        case 4:
            printf("You walk to the end of the hall and turn right");
            break
    }
    
}
