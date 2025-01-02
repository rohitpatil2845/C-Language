#include<stdio.h>
int sum(int a,int b);

int main()
{   int a,b;
    printf("enter number a and b");
    scanf("%d %d",&a ,&b);

    int s= sum (a,b);
    printf("sum is %d",s);
} 
  int sum(int a,int b){ //int x, int y
    return a+b;
  }