#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    int i=0;
    while (i<=num)
    {
        printf("%d\n",i);
        i++;
    }
      return 0;
}