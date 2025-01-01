#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("enter a number ");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }if (temp==sum)
    {
      printf("armstrong number");
    }else
    {
      printf("not a armstromg number");
    } 
      return 0;
}