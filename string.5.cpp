#include<stdio.h>
int main()
{
	char a[20];
	int i=0;
	printf("Enter your string: ");
	gets(a);
	while(a[i]!='\0')
	{
		i++;
	}
	printf("The no. of words are %d",i);
	return 0;
}
