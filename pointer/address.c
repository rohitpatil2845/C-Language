#include<stdio.h>
int main()
{
 int age = 22;
 int *ptr = &age;
 //int _age= *ptr;
 
 printf("%d\n", &age);

 printf("%d\n",&ptr);

 printf("%u\n",ptr);
  return 0;

}