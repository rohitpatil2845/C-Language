#include<stdio.h>
void printtable(int x);

int main()
{
 int x;
 printf("enter a number");
 scanf("%d",&x);
 printtable(x);  //argument/actual parameter
 return 0;
}
 void printtable(int n){
    for (int i = 1; i<=10; i++)
    {
      printf("%d\n",i*n);
    }
    
 }
