#include <stdio.h>

int main(void)
{
	int num1 = 15, num2 = 30, num3 = 45;

	// ptr1¢ºnum1, ptr2¢ºnum2, ptr3¢ºnum3
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	ptr1 = ptr2;	// ptr1¢ºnum2
	ptr2 = ptr3;	// ptr2¢ºnum3

	*ptr3 *= 2;			// num3 *= 2 ¢º num3´Â 90
	*ptr1 += *ptr3;		// num2 += 90 ¢º num2´Â 120
	*ptr2 *= 2;			// num3 *= 2 ¢º num3´Â 180

	printf("%d %d %d", num1, num2, num3);

	return 0;
}