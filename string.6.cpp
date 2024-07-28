#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,j,flag=0;
	printf("Enter your string: ");
	scanf("%s",&a);
	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		if(a[i]==a[j])
		{
			flag++;
		}
	}
	if(flag==0)	
	printf("%s is not a palindrome",a);
	else
	printf("%s is a palindrome",a);
	return 0;
}
