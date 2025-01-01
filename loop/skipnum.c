#include<stdio.h>
int main()
{  int n;
   int i;
    printf("enter a num");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
      if (i==3)
      {
        continue;
      }
       printf("%d\n",i);
    }
     return 0;
}