/*************************reverse*************************/
#include<stdio.h>
int main()
{
int number,reverse=0;
printf("enter a number to reverse\n");
scanf("%d",&number);
while(number!=0)
{
reverse=reverse*10;
reverse=reverse+number%10;
number=number/10;
}
printf("reverse of entered number is =%d\n",reverse);
return 0;
}
/****************************output************************
enter a number to reverse
123
reverse of entered number is =321
**********************************************************\
