#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    double weight, height, bmi;

    printf("weight(kg)");
    scanf("%lf", &weight);

    printf("height(m)");
    scanf("%lf", &height);
    bmi = weight / (height * height);

    printf("\nBMI:%.2f\n\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight:  less than 18.5\n");
    printf("Normal:       between 18.5 and 24.9\n");
    printf("Overweight:   between 25 and 29.9\n");
    printf("Obese:        30 or greater\n");

    return 0;
}