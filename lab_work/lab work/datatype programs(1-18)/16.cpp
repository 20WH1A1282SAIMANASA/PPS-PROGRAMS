/*16.Write a C program that read 5 numbers and find the sum of  of positive numbers and negative numbers.*/

#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,sum_p = 0,sum_n = 0;
	printf("enter 5 numbers\n");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if (num1>0)
	{
		sum_p = sum_p+num1;
	}
	else
	sum_n = sum_n+num1;
	
	if (num2>0)
	{
		sum_p = sum_p+num2;
	}
	else
	sum_n = sum_n+num2;
	
	if(num3>0)
	{
		sum_p = sum_p+num3;
    }
	else
	sum_n = sum_n+num3;
	
	if (num4>0)
	{
		sum_p = sum_p+num4;
	}
	else
	sum_n = sum_n+num4;
	
	if (num5>0)
	{
		sum_p = sum_p+num5;
	}
	else
	sum_n = sum_n+num5;
	printf("sum of positive numbers = %d\n",sum_p);
	printf("sum of negative numbers = %d\n",sum_n);	
	
    return 0;
}
