/*15.Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.*/



#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,count = 0;
	printf("enter 5 numbers\n");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	if (num1>0)
	{
		printf("positive number\n");
		count = count+1;
	}
	else
	printf("negative number\n");

	if (num2>0)
	{
		printf("positive number\n");
		count = count+1;
	}
	else
	printf("negative number\n");
	
	if(num3>0){
	    printf("positive number\n");
		count = count+1;
    }
	else
	printf("negative number\n");
	
	if (num4>0){
		printf("positive number\n");
		count = count+1;
	}
	else
	printf("negative number\n");
	
	if (num5>0)
	{
		printf("positive number\n");
		count = count+1;	
	}
	else
	printf("negative number\n");
	
	printf("no.of positive numbers = %d\n",count);
	printf("no.of negative numbers = %d\n",5-count);	
	
	return 0;
}
