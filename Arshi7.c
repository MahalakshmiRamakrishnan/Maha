#include <stdio.h>

int main(void) {
	int n,sum;
	printf("Enter the number");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("The sum of given number is %d",sum);
	return 0;
}
