#include <stdio.h>

int main(void) {
	int a,i,n,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		i=a%10;
		a=a/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
