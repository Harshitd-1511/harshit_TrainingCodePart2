#include<stdio.h>
int main()
{
	int n,i,x;
	float sum=0;
	printf("Enter the no. of terms: ");
	scanf("%d",&n);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("1+");
	for(i=2;i<=n;i++)
	{
		if(i<n)
		{
			printf("%d%d/%d+",x,i,i);
			sum=sum+1/i;
		}
		else{
			printf("%d/%d%d",x,i,i);
			sum=sum+1/i;
		}
	}
	printf("\n%f is the sum of series",sum);
	return 0;
}
