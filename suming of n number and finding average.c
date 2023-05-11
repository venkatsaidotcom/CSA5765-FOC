#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    
    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        float num;
        scanf("%f", &num);
        sum += num;
    }
    
    // Calculate the average
    average = sum / n;
    
    // Output the sum and average
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
