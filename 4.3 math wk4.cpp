//Math practice week 4
//Nevaiha Adams
//11/5/2023
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int correctAnswers = 0;
    int totalProblems = 0;
    int choice;
    
    printf("Nevaiha Adams' Math Program Practice Main Menu\n");
    
    time_t current_time;
    char* c_time_string;
    
    current_time = time(NULL);
    c_time_string = ctime(&current_time);
    printf("Current time is %s", c_time_string);
    
    do {
        // Display menu options
        printf("Enter choice:\n");
        printf("	1 for Addition\n");
        printf("	2 for Subtraction\n");
        printf("	3 for Multiplication\n");
        printf("	4 for Division\n");
        printf("	5 to Exit\n");
        
        scanf("%d", &choice);
        
        switch(choice) {
            case 5:
                printf("Exiting program.\n");
                break;
                
            case 1: {
                int num1, num2, answer, userAnswer;
                
                // Generate addition problem
                num1 = rand() % 100;
                num2 = rand() % 100;
                answer = num1 + num2;
                
                printf("Problem: %d + %d = ", num1, num2);
                scanf("%d", &userAnswer);
                
                // Check answer
                if(userAnswer == answer) {
                    printf("Correct!\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect!\n");
                }
                
                totalProblems++;
                break;
            }
            
            case 2: {
                int num1, num2, answer, userAnswer;
                
                // Generate subtraction problem
                num1 = rand() % 100;
                num2 = rand() % 100;
                answer = num1 - num2;
                
                printf("Problem: %d - %d = ", num1, num2);
                scanf("%d", &userAnswer);
                
                // Check answer
                if(userAnswer == answer) {
                    printf("Correct!\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect!\n");
                }
                
                totalProblems++;
                break;
            }
            
            case 3: {
                int num1, num2, answer, userAnswer;
                
                // Generate multiplication problem
                num1 = rand() % 100;
                num2 = rand() % 100;
                answer = num1 * num2;
                
                printf("Problem: %d * %d = ", num1, num2);
                scanf("%d", &userAnswer);
                
                // Check answer
                if(userAnswer == answer) {
                    printf("Correct!\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect!\n");
                }
                
                totalProblems++;
                break;
            }
            
            case 4: {
                int num1, num2, answer, userAnswer;
                
                // Generate division problem
                num1 = rand() % 100;
                num2 = rand() % 100;
                
                // Make sure num2 is not 0
                if(num2 == 0) {
                    num2++;
                }
                
                answer = num1 / num2;
                
                printf("Problem: %d / %d = ", num1, num2);
                scanf("%d", &userAnswer);
                
                // Check answer
                if(userAnswer == answer) {
                    printf("Correct!\n");
                    correctAnswers++;
                } else {
                    printf("Incorrect!\n");
                }
                
                totalProblems++;
                break;
            }
            
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("\n");
        
    } while(choice != 5);
    
    // Display statistics
    printf("Total problems answered: %d\n", totalProblems);
    printf("Correct answers: %d\n", correctAnswers);
    
    return 0;
}
