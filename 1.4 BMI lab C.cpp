#include<stdio.h>
int main() {

float height = 0;
float weight = 0;
float bmi = 0;
	
printf("Please enter your height (in inches): ");
scanf("%f", &height);
printf("Please enter your weight (in pounds): ");
scanf("%f", &weight);

bmi = (weight*703.00) / (height*height);

if (bmi <= 18.5) {
	printf("You are underweight with your Body Mass Index being: %f", bmi);
}
else {
	if (bmi > 18.5, bmi <= 24.9) {
	printf("You are average with your Body Mass Index being: %f", bmi);
} 
else {
	if (bmi >= 25, bmi <= 29.9) {
	
	printf("You are overweight with your Body Mass Index being: %f", bmi);
}
else {
	printf("You are obese with your Body Mass Index being: %f", bmi);
}
}
}

return 0;

}
