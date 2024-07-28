#include<stdio.h>
int main()
{
	int n,i,k=1,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(k)
		{
			printf("%d-",i);
			sum=sum+i;
		}	
		else{
			printf("%d+",i);
			sum=sum-i;
		}
		k=!k;
	}
	printf("\nThe sum of series is %d",sum);
	return 0;
}
