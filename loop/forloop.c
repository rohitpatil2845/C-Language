#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int i;
    printf("enter a number ");
    scanf("%d",&n);

       for (i=0; i<=n; i++)
       {
         sum=sum+i; //sum+=i
       }
         printf("%d\n",sum);

       for ( i = n; i>=0; i--)
       {
         printf("%d\n",i);
       }
       return 0;
}