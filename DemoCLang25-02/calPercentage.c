#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter the number: ");
    scanf("%f", &a);

    printf("Enter the percentage: ");
    scanf("%f", &b);

    result = (a * b) / 100;

    printf("%.2f%% of %.2f is: %.2f\n", b, a, result);

    return 0;
}

