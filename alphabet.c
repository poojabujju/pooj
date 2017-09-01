#include <stdio.h>
int main()
{
    char b;
    printf("Enter a character: ");
    scanf("%a",&b);

    if( (b>='a' && b<='z') || (b>='A' && b<='Z'))
        printf("%a is an alphabet",b);
    else
        printf("%a is not an alphabet",b);

    return 0;
}
