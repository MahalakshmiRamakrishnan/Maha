#include <stdio.h>

int main(void) {
	int a,b,c,d=0;
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
		c=b%10;
		d=(d*10)+c;
		b=b/10;
	}
	if(a==d)
	printf( "%d is palindrome",a);
	else
	printf("%d is not a palindrome",a);
	return 0;
}
