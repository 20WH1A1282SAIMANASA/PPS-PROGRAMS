/*22.Program to swap two numbers without using temperory variable.*/



#include<stdio.h>
int main()
{
	int x ,y ;
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	printf("before swap x = %d y = %d",x,y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("\nAfter swap x = %d y = %d",x,y);
	return 0;
}
