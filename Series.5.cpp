#include<stdio.h>
int main()
{
	int n,i;
	printf("The first 20 odd numbers are: ");
	for(n=0;n<=40;n++)
	{
		if(n%2!=0)
		{
			printf("%d\n",n);
		}
	}
	return 0;
}
