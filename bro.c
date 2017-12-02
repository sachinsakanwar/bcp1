
/***************************************************prime number********************************************/
#include<stdio.h>
int main()
{
int integer,number;
printf("enter the number");
scanf("%d",&number);
for(integer=2;integer<=number-1;integer++)
{
if (number%integer==0)
printf("the number you are entered is not prime");
break;
}
if(number==integer)
{
printf("the number is prime number");
}
}
/******************************************output*******************************************************

enter the number 6
the number you are entered is not prime
*************************************************************************************************************/
