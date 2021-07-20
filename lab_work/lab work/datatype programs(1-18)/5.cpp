/*Write a C program to read and print the values of variables of 
different data types(int, short int,longint,long long int(decimal,octal,hexadecimal),char,float,double , long double)*/




#include<stdio.h>
int main(){
	int a = 5,b = 5,c=5,d = 123,l1;
	char x;
	float y;
	double z;
	
	
	printf("a & b = %d\n", a&b);
	printf("a | b = %d\n", a|b);
	printf("a ^ b = %d\n", a^b);
	printf("a >> 2 = %d\n",a >> 2 );
	printf("\n\n\n");
	
	
	printf("size of a is %d bytes\n",sizeof(a));
	printf("size of x is %d bytes\n",sizeof(x));
	printf("size of y is %d bytes\n",sizeof(y));
	printf("size of z is %d bytes\n",sizeof(z));
	
return 0;
}

