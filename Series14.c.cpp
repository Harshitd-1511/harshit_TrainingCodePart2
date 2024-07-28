#include<stdio.h>
int main()
{
	int n,i;
	float sum=0;
	printf("Enter the no. of terms: ");
	scanf("%d",&n);
	printf("1+");
	for(i=2;i<=n;i++)
	{
		if(i<n)
		{
			printf("1/%d+",i);
			sum=sum+1/i;
		}
		else{
			printf("1/%d",i);
			sum=sum+1/i;
		}
	}
	printf("\n%f is the sum of series",sum);
	return 0;
}
