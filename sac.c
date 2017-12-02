/***************************swapping**********************/
#include<stdio.h>
int main()
{
    int first,second;
   printf("enter two number\n");
   scanf("%d%d",&first,&second);
first=first+second;
second=first+second;
printf("first number=%d\nsecond number=%d",first,second);
}
/****************************output*****************************
enter two number
7 8
first number=15
second number=23
******************************************************************/


