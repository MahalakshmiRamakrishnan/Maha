#include <stdio.h>

int main(void) {
	int i,n,f=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial is %d",f);
	return 0;
}
