#include <stdio.h>

int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the maximum number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series from 0 to %d:\n", n);

    for(i=1; i<=n; i++)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
	return 0;
}
