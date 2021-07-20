/*2.Write a C program to compute the perimeter and area of a rectangle, Circle*/
#include<stdio.h>
int main(){
	int r,l,b;
	float p1,a1,p2,a2;
	printf("enter the r of circle\n");
	scanf("%d",&r);
	printf("enter the l of rectangle\n");
	scanf("%d",&l);
	printf("enter the b of rectangle\n");
	scanf("%d",&b);
	p1 = 2*3.14*r;
	a1 = 3.14 * r * r;
	p2 = 2*(l + b);
	a2 = l * b;
	printf("perimeter of circle is %f\n",p1);
	printf("area of circle is %f\n", a1);
	printf("perimeter of rectangle is %f\n",p2);
	printf("area of rectangle is %f\n", a2);



return 0;
}
