/*7.write a C program that accepts 3 integers from the user 
and calculate the sum  ,Product  average of these  3 integers
*/#include<stdio.h>
int main(){
	int N1,N2,N3;
	printf("enter 3 numbers\n");
	scanf("%d %d %d", &N1 ,&N2,&N3);
	printf("sum is %d\n", N1+N2+N3);
	printf("product is %d\n", N1*N2*N3);
	printf("average is %f", N1+N2+N3/3.0 );



return 0;
}


