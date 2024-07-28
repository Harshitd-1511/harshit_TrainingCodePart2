#include<stdio.h>
int main()
{
	int n,i,k=1,x,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		if(k)
		{
			printf("%d%d-",x,i);
			sum=sum+i;
		}	
		else{
			printf("%d%d+",x,i);
			sum=sum-i;
		}
		k=!k;
	}
	printf("\b \nThe sum of series is %d",sum);
	return 0;
}
