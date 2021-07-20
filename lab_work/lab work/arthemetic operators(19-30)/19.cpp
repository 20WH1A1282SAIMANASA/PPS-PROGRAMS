/*19.Program to extract the digit in one's place of an integer 
      Eg: I/p=123   O/P=3*/


#include<stdio.h>
int main()
{
	int num,last_num;
	printf("enter num value\n");
	scanf("%d",&num);
	last_num = num % 10;
	printf("last digit is %d",last_num);
	return 0;
	
}
