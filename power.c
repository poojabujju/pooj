#include <stdio.h>
#include <math.h>

int main()
{
    int b, e, r;

    printf("Enter a b number: ");
    scanf("%d", &b);

    printf("Enter an e: ");
    scanf("%d", &e);

 
    r = pow(b, e);

    printf("%d^%d = %2d", b, e, r);

    return 0;
}
