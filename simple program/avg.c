#include<stdio.h>
int main()
{
    int a,b,c,avg;
    printf("enter a numbers");
    scanf("%d %d %d",&a,&b,&c);
    avg=a+b+c;
    avg=avg/3;
    printf("average of three number is =%d",avg);
    return 0;
}