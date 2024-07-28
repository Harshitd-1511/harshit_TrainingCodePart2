#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d/%d",i,i+1);
		sum=sum+double(i/(i+1));
		printf("+");
	}
	printf("\b \nThe sum of the series is %f",sum);
	return 0;
}
