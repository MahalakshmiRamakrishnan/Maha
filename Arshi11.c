#include <stdio.h>

int main(void) {
	int i,n,flag=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		flag=1;
	}
	if(flag!=0)
	{
		printf("%d is not a prime number",n);
	}
	else
	{
		printf("%d is a prime number",n);
	}
	return 0;
}
