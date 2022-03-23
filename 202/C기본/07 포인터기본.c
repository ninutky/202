#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	// ptr1¢ºnum1, ptr2¢ºnum2, ptr3¢ºnum3
	int* ptr1 =&num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	ptr3 = ptr2;	// ptr3¢ºnum2
	ptr2 = ptr1;	// ptr2¢ºnum1
	ptr1 = ptr2;	// ptr1¢ºnum1

	printf("%d %d %d \n", *ptr1, *ptr2, *ptr3);

	return 0;
}