/*34.Program to flip bits of a binary number*/
#include <stdio.h>
int main()
{
    int num, flipped_Number;

    printf("Enter any number: ");
    scanf("%d", &num);

    flipped_Number = ~num;

    printf("Original number = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d (in decimal)", flipped_Number);
    return 0;
}
