#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]={"helloWORLD"};
	int i;
	printf("The entered string is %s",a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else{
			a[i]=a[i]+32;
		}
	}
	printf("\nThe string after is %s",a);
	return 0;
}
