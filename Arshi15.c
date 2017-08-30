#include <stdio.h>

int main(void) {
	int i,t,l,c;
	printf("Enter the table");
	scanf("%d",&t);
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		c=t*i;
		printf("%d*%d=%d\n",t,i,c);
	}
	return 0;
}
