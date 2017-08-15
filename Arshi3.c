#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("Enter the 3 number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
	printf("a is largest number");
	}
	else if(b>c)
	{
		printf("b is largest number");
	}
	else
	{
		printf("c is largest number");
	}
	return 0;
}
