#include <stdio.h>

int main(void) {
	char a;
	printf("Enter the character");
	scanf("%c",&a);
	if(a>='a'||a>='A')
	{
		printf("%c is a alphabet",a);
	}
	else
	{
		printf("%c is not a alphabet",a);
	}
	return 0;
}
