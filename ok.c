/****************volume of cube*************************/
#include<stdio.h>
void main()
{
float length;
float surfacearea,volume;
printf("enter the length of any side of cube");
scanf("%f",length);
surfacearea = 6*(length*length);
volume=length*length*length;
printf("surfacearea of cube is %3f",surfacearea);
printf("volume of cube is %3f",volume);
}



