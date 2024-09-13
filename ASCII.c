//chpt/ascii.c
#include<stdio.h>
int main()
{
	char x = 72;
	char y = 105;
	char z = 33;

	printf("ASCII %d+%d+%d=%c%c%c\n", x, y, z, x, y, z);

	char a = 'A';
	char b = a + 1;
	printf("%c+1=%c\n", a, b);
	printf("\n\n");

	printf("ASCII 문자를 순서대로 출력하기\n");
		for(int i = 48; i <= 57; i++)
			printf("ASCII: %d=%c\n", i, i);

	
}