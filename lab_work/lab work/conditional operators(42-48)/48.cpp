/*48.programs to read name and gender of a person and print Mr. or Mrs. before the name */
#include<stdio.h>
int main()
{
	
	char name[50];
	char gender;

	
	printf("enter gender(M/F)\n");
	scanf("%c",&gender);
	printf("enter name\n");
	scanf("%s",&name);
	
    (gender =='F')? printf("Mrs.%s",name): printf("Mr.%s",name);



return 0;
}
