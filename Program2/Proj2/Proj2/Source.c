#include<stdio.h>
#include<math.h>


int main() {
	float weight, height, bmi;
	int response;
	printf("-----------------------\n");
	printf("-                     -\n");
	printf("-   BMI calculator    -\n");
	printf("-                     -\n");
	printf("-----------------------\n");
	printf("Attention! : To calculate your BMI,\nyour height(m) and weight(kg) are required,please weight and measure your height first.");
ENT:	printf("\n\nPlease enter the following information\n");
	printf("----------------------\n");
	printf("|                    |\n");
	printf("|     HEIGHT (m)     |  :");
	scanf_s("%f", &height);
	printf("|                    |\n");
	printf("----------------------\n");
	printf("|                    |\n");
	printf("|     WEIGHT (kg)    |  :");
	scanf_s("%f", &weight);
	printf("|                    |\n");
	printf("----------------------\n");
	printf("Please check your information\nheight : %.2f metres ,weight : %.2f kilograms", height, weight);
	printf("\n\nis it correct?[0=yes,1=no] :");
	scanf_s("%d", &response);
	if (response == 1) {
		goto ENT;
	}
	else {
		printf("\ncalculating...\n");
	}
	bmi = weight / (height * height);
	printf("\nyour bmi is : %.2f", bmi);
	if (bmi < 18.5) {
		printf("\n\nyou are underweight\n\n");
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("\n\nyou are in normal range\n\n");
	}
	else if (bmi >= 25 && bmi <= 29.9) {
		printf("\n\nyou are above standard\n\n");
	}
	else
		printf("\n\nyou are overweight\n\n");
	printf("\n\nDo you want to calculate again?[0=yes,1=no] :");
	scanf_s("%d", &response);
	if (response == 0) {
		goto ENT;
	}
	else {
		printf("-------------------------------------------\n");
		printf("|           This program made by           |\n");
		printf("|         61011085 Sawat Lapprsertlum      |\n");
		printf("|                 Thank you                |\n");
		printf("-------------------------------------------\n\n\n\n");
		printf("           Exiting Program...\n\n\n");
	}



	return 0;
}