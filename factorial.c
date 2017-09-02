#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long f = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Error! F of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            f *= i;              // f = f*i;
        }
        printf("F of %d = %llu", n, f);
    }

    return 0;
}
