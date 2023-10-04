#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is non-negative
    if (n <= 0) {
        printf("Please enter a valid number of elements greater than 0.\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        double num;
        scanf("%lf", &num);
        sum += num;
    }

    average = sum / n;

    printf("Average = %.2lf\n", average);

    return 0;
}
