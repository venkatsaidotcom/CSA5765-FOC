#include <stdio.h>
int main()
{
    int n, i;
	printf("Enter the maximum even number: ");
    scanf("%d", &n);
	 printf("Even number series from 2 to %d:\n", n);
    for(i=2; i<=n; i+=2)
    {
        printf("%d ", i);
    }
���   �return 0;
}
