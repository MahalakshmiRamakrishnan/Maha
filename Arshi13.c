#include <stdio.h>

int main(void) {
	int i,n,m;
	printf("Enter the starting and ending number");
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		printf("%d",i);
	}
	return 0;
}
