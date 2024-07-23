#include<stdio.h>
#include<stdlib.h>

void addition() 
{
    int num1 = rand()%100+1;
    int num2 = rand()%100+1;
    int answer, correctAnswer = num1 + num2;

    printf("What is %d + %d? ", num1, num2);
    scanf("%d", &answer);

    if(answer == correctAnswer) printf("Correct!\n");
    else printf("Incorrect!\n");
    
    return main();
}

void subtraction() {
	
    int num1 = rand()%100+1;
    int num2 = rand()%100+1;

    int answer, correctAnswer = num1 - num2;

    printf("What is %d - %d? ", num1, num2);
    scanf("%d", &answer);

    if(answer == correctAnswer) printf("Correct!\n");
    else printf("Incorrect!\n");
    
    return main();
}

void multiplication() 
{
    int num1 = rand()%100+1;
    int num2 = rand()%100+1;
    int answer, correctAnswer = num1 * num2;

    printf("What is %d * %d? ", num1, num2);
    scanf("%d", &answer);

    if(answer == correctAnswer) printf("Correct!\n");
    else printf("Incorrect!\n");
    
    return main();
}

void division() 
{
    int num1 = rand()%100+1;
    int num2 = rand()%100+1;
    if (num1 < num2) 
	{int num3=num1; num1=num2; num2=num3;}

    int answer, correctAnswer = num1 / num2;

    printf("What is %d / %d? (integer division) ", num1, num2);
    scanf("%d", &answer);

    if(answer == correctAnswer) printf("Correct!\n");
    else printf("Incorrect!\n");
    
    return main();
}

int main() 
{
	srand(time(NULL));
    int choice;
	
	printf("Enter choice:\n");
    printf("	1 for Addition\n");
    printf("	2 for Subtraction\n");
    printf("	3 for Multiplication\n");
    printf("	4 for Division\n");
    printf("	5 to Exit\n");
    scanf("%d", &choice);
    
    switch(choice) {
    case 1: addition();
    case 2: subtraction();
    case 3: multiplication();
    case 4: division();
    case 5: exit(0); break;

    return 0;
	}
}
