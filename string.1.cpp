#include<stdio.h>
int main()
{
	char a[20];
	int i=0;
	printf("Enter your string: ");
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d is the length of the string",i);
	return 0;
}
