/* 40.program to input any number from user and check whether the Most Significant Bit (LSB) of the given
number is set (1) or not (0).*/

#include<stdio.h>
#define BITS sizeof(int) * 8
int main()

{
	int num, msb;
	printf("Enter the number:");
	scanf("%d",&num);
	msb =1 << (BITS - 1);
	if(num & msb)
	printf("MSB of %d is set(1).",num);
	else
	printf("MSB of %d is set(0).",num);
		
}
