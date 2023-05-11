#include <stdio.h>
int main() {
    int n, sum = 0,i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i += 2) 
	{
        sum += i;
    }
    
    printf("Sum of the even number series is: %d\n", sum);
    
    return 0;
}
