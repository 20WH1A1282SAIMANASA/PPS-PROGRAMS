/*10.Write a C program to calculate a bike's average consumption    
 from the given total distance(integer value) travelled (in km)and spent fuel (in liters, float number - 2 decimal point).*/
#include<stdio.h>
int main()
{
	int distance;
	float fuel;
	printf("enter distance in km\n");
	scanf("%d",&distance);
	printf("enter fuel consumption in litres\n");
	scanf("%f",&fuel);
	printf("average consumption is %2f",fuel/distance);



return 0;
}

