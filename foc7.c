#include <stdio.h>
int main()
 {
    int n, sum = 0,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
	 {
        sum += i * i * i;
    }
    printf("Sum of the cubes of the numbers is: %d\n", sum);
    return 0;
}
