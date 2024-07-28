#include<stdio.h>
int main()
{
	int n,i,x,sum=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("\nEnter the value of X:");
	scanf("%d",&x);
	printf("1+");
	for(i=1;i<=n;i++)
	{
		printf("%d%d+",x,i);
		sum=sum+x*i+1;
	}
	printf("\b \nThe sum of series is %d",sum);
	return 0;
}
