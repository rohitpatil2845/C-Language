#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a number a");
    scanf("%d", &a);
    printf("enter a number b");
    scanf(" %d", &b);
    if (a > b)
    {
        printf("a is greater");
    }
    else if (a == b)
    {
        printf("a and b are Equal");
    }
    else
        printf("b is greater");
    return 0;
}