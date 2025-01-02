#include<stdio.h>
int squarearea(int side);
float rectanglearea(float a, float b);
int main()
{

 printf("Area of Rectangle is %f",rectanglearea(10,5)); 
 printf ("\n");
 printf("Area of square is %d ",squarearea(10));
 return 0;
}

int squarearea(int side){
return side*side;
}
float rectanglearea(float a, float b){
    return a*b;
}