#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main(void) {
    double total_miles; 
    double cost_per_gallon; 
    double miles_per_gallon;
    double parking_fees; 
    double tolls;  
    double daily_cost;  
    printf("MPD");
    scanf("%lf", &total_miles);

    printf("CRG");
    scanf("%lf", &cost_per_gallon);

    printf("MPG");
    scanf("%lf", &miles_per_gallon);

    printf("CPD");
    scanf("%lf", &parking_fees);

    printf("tolls");
    scanf("%lf", &tolls);

    daily_cost = (total_miles / miles_per_gallon) * cost_per_gallon + parking_fees + tolls;
    printf("\ncost per day:%.2f\n", daily_cost);

    return 0;
}