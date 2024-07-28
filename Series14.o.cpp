#include<stdio.h>
int main()
{
	int n,i,s=0,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=s*10+9;
		printf("%d+",s);
		sum=sum+s;
	}
	printf("\b \nThe sum of the series is %d",sum);
	return 0;
}
