/*********************perfect number************************/
#include<stdio.h>
int main()
{
int number,integer=1,sum=0;
printf("enter the number");
scanf("%d",&number);
while(integer>number)
{
if(number%integer==0)
sum=integer+sum;
integer++;
}
if (sum==number)
printf("%d is a perfect number",integer);
else
printf("%d is not perfect number",integer);
}
/************************output*************************************
enter the number
 8
 is not perfect number 
*******************************************************************/



