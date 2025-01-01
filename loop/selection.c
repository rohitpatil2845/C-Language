#include<stdio.h>
int main()
{
  int arr[5],i,j,n,temp;
  printf("enter the array element");
  for (i = 0; i<=4; i++)
  {
     scanf("%d",&arr[i]);
  }
    for(i=1; i<=4; i++){

        j=i;
        while (j>0 && arr[j-1]>arr[j] )
    
            {
            temp= arr[j];
             arr[j]= arr[j-1];
            arr[j-1]= temp;
            j--;

        }
    }
    
   
     printf("sorted list");
     for ( i = 0; i <=4; i++)
     {
        printf("%d",arr[i]);
     }
       printf("\n");
       return 0;
}

     