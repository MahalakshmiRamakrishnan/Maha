#include <stdio.h>

int main(void) {
	int a;
	printf("Enter the year");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("%d is leap year",a);
	}
	else
	{
		printf("%d is non leap year",a);
	}
	return 0;
}
