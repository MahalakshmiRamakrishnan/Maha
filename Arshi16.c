#include <stdio.h>

int main(void) {
	int i,n,a,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		i=a%10;
		sum=sum+(i*i*i);
		a=a/10;
	}
	if(sum==n)
	{
		printf("%d is armstrong number",n);
	}
	else
	{
		printf("%d is not a armstrong number",n);
	}
	return 0;
}
