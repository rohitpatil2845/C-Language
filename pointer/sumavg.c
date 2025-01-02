#include<stdio.h>

void dowork(int a, int b, int *sum, int *avg, int *prod);

int main()
{ int a=3;
  int b=5;
  int sum,prod,avg;
  dowork(a, b, &sum, &avg, &prod);

  printf("sum =%d, avg %d, prod &%d ",sum ,avg, prod);

}
  void dowork(int a, int b, int *sum,int *avg, int *prod){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
  }