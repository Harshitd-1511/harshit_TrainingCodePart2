#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="string";
	char temp;
	int i,j;
	printf("The original string is %s",a);
	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	printf("\nThe reverse string is %s",a);
	return 0;
}
