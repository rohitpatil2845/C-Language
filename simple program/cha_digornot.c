#include<stdio.h>
int main()
{
 char ch;
 printf("enter a character");
 scanf("%c",&ch);
 if (ch>='0' && ch<='9')
 {
    printf("given char %c is digit",ch);
 }else
 {
    printf("given char %c is not digit",ch);

 }
   return 0;
    
}