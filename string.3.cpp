#include<stdio.h>
int main()
{
	char a[20];
	int i=0,j=0;
	printf("Enter your string: ");
	scanf("%s",&a);
	printf("%s is the string",a);
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			j++;
		}
		i++;
	}
	printf("\nThe no. of vowels are %d",j);
	return 0;
}
