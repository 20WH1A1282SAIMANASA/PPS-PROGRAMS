/*35.programs to find no. of bits in an integer number*/
#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    printf("Enter the integer:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        if ((num & 1) == 1)
            count++;
        num = num >> 1;
    }
    printf("num of one's are :\n%d\n", count);
    return 0;
	}
