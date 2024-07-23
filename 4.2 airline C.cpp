#include <stdio.h>
#include <stdlib.h>

int seats[10] = {0};

void assignSeat(int class) 
{
    int start, end, i;
    char *classStr;

    if (class == 1) 
    {
        start = 0;
        end = 5;
        classStr = "First class";
    } 
    else if (class == 2)
    {
        start = 5;
        end = 10;
        classStr = "Economy";
    }
    else
    {
    	printf("Invalid choice. Please try again.");
    	return;
	}

    for (i = start; i < end; i++) 
    {
        if (seats[i] == 0) 
        {
            seats[i] = 1;
            printf("Boarding pass: Seat %d, %s\n\n", i+1, classStr);
            return;
        }
    }

    if (class == 1) 
    {
        printf("First class is full. Would you like to be placed in Economy?\n(1 for yes/2 for no)\n");
    }
    else 
    {
        printf("Economy is full. Would you like to be placed in First class?\n(1 for yes/2 for no)\n");
    }
    scanf("%d", &i);

    if (i == 1) 
    {
        assignSeat(class == 1 ? 2 : 1); 
    } 
      else 
    {
        printf("Next flight leaves in 3 hours.\n");
    }
}

int main() 
{
    int class, i;

    for (i = 0; i < 10; i++) 
    {
        printf("\nPlease type 1 for first-class\nPlease type 2 for economy\n");
        scanf("%d", &class);

        assignSeat(class);

        if (i == 9) 
        {
          printf("Flight is full.\n");
        }

    }

    return 0;
}
