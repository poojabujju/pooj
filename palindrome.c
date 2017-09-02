#include<stdio.h>
int main()
{
    int b, s, t;
    printf("Enter value of b: ");
    scanf("%d",&b);
    t=b;
    for(s=0;b>0;b=b/10)
    {
        s = s*10;
        s = s + (b%10);    
    }
    if(t == s)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0; 
}
