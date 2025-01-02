#include<stdio.h>

void printHello();  //declaration/prototype
void printGoodbye();


int main()         //function call
{
 printHello();
 printGoodbye();
 return 0;
}

void printHello(){  //function defination
    printf ("Hello\n");
}
void printGoodbye(){
    printf ("Goodbye\n");
}