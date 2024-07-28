#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("All even no.s btw 1 to 50 are\n");
	for(a=1;a<=50;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}
