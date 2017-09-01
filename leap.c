#include <stdio.h>

int main()
{
    int y;

    printf("Enter a y: ");
    scanf("%d",&y);

    if(y%4 == 0)
    {
                printf("%d is a leap y", y);
    }
            else
    {
                printf("%d is not a leap y", y);
       
    }
     return 0;
}
