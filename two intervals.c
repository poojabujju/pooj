#include <stdio.h>
int main()
{
    int l, high, i, f;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &high);

    printf("Prime numbers between %d and %d are: ", l, high);

    while (l < high)
    {
        f = 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}

