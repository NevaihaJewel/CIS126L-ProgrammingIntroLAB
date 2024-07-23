#include<stdio.h>
int main() {

int age;
	printf("Enter your age: ");
	scanf("%d", &age);

if (age < 18) {
	printf("You are a minor.");
} 

else if (age >= 18, age <= 65) {
	printf("You are of working age.");
}

else if (age > 65) {
	printf("You are retired.");
}

}
