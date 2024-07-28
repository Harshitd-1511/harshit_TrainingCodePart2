#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="hello";
	char b[15]="world";
	int i,n=5;
	for(i=0;i<strlen(b);i++)
	{
		a[n+i]=b[i];
	}
	printf("%s\b is the complete string",a);
	return 0;
}
