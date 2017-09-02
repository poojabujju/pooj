#include <stdio.h>
int main()
{
    int l, h, i;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);
if((l%2==0)&&(h%2==0))
{
 printf("Even numbers between 2 intervals are: ", l, h);
}
        return 0;
}
