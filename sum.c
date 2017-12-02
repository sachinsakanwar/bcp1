/********************************sum of array using pointer*******************************/
#include<stdio.h>
void main()
{
int numarray[10];
int i,sum=0;
int*ptr;
printf("enter 5 elements;");
for(i=0;i<5;i++)
scanf("%d",&numarray[i]);
ptr=numarray;
for(i=0;i<5;i++){
sum=sum+*ptr;
ptr++;
}
printf("the sum of array elements:%d",sum);
}
/************************************* output *********************************************/
enter 5 elements;
10
20
30
40
50
the sum of array elements:150
/*******************************************************************************************/
