#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char temp;
	int i,j;
	printf("Enter your string: ");
	scanf("%s",&a);
	printf("%s is the original string",a);
	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\n%s is the reverse string",a);
	return 0;
}
