//chp1/num.c
#include<stdio.h>
#include<limits.h>//maximum, minimum values
int main()
{
	//char
	signed short int sshort = 1234;
	printf("\nsigned short int sshort: \n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min : %d\n", CHAR_MIN);

	unsigned int uint = 12345U;
	printf("\nsigned int uint: \n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", INT_MAX);
	printf("Min : %d\n", INT_MIN);


	signed long int slong = 123456789L;
	printf("\nsigned int slong: \n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", INT_MAX);
	printf("Min : %d\n", INT_MIN);



	unsigned long int uslong = 123456789UL;
	printf("\nsigned int uslong: \n");
	printf("Value: %d\n", uslong);
	printf("Max: %ul\n", ULONG_MAX);
	printf("Min : %ul\n", ULONG_MIN);


	return 0;
}
