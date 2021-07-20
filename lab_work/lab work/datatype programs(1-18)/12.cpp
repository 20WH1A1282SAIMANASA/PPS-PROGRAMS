/*12.Write a C program to convert temperature from foreinheit to celcius.*/



#include<stdio.h>
int main()
{
	int f;
	float c;
	printf("enter f\n");
	scanf("%d",&f);
	c = (5.0/9)*(f-32);
	printf("%f",c);
		
    return 0;
}
