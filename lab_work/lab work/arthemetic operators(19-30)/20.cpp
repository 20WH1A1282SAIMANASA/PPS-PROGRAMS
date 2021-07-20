/*20.Program to print the number excluding its last two digits 
           Eg I/P =1234  O/P =12    */

#include<stdio.h>
int main()
{
	int num,output;
	printf("enter num value\n");
	scanf("%d",&num);
	output = num / 100;
	printf("%d",output);

	return 0;
}
