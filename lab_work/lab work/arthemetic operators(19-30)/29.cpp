/*29.Program to input two angles from user and find third angle of the triangle*/

#include<stdio.h>
int main()
{
	int angle_1,angle_2;
	printf("enter first angle of a triangle\n");
	scanf("%d",&angle_1);
	printf("enter second angle of a triangle\n");
    scanf("%d", &angle_2);
    printf("third angle is %d", 180-(angle_1+angle_2));

return 0;
}

