#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is Even\n", number);
    }
    else {
        printf("%d is Odd\n", number);
    }
    return 0;
}