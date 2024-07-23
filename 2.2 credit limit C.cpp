#include<stdio.h>

int main()
{
	 int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit;

    while (accountNumber != -1) {
        printf("Enter account number (or -1 to quit): ");
        scanf("%d\n", &accountNumber);

        if (accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        scanf("%f\n", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f\n", &totalCharges);

        printf("Enter total credits: ");
        scanf("%f\n", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%f\n", &creditLimit);

        float newBalance = beginningBalance + totalCharges - totalCredits;

        printf("Customer's account number: %d\n", accountNumber);
        printf("Credit limit: %f\n", creditLimit);
        printf("New balance: %f\n", newBalance);

        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded");
        }
    }

    	return 0;
}
