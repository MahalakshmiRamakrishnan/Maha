#include <stdio.h>

int main(void) {
   char A;
   printf("Enter the character");
   scanf("%c",&A);
   if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u')
   printf("It is vowel");
   else
   printf("It is consonents");
	return 0;
}
