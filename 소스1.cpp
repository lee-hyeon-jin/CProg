#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;
	printf("4자리 정수를 입력하여라: ");
	scanf("%d", &a);
	printf("%10d %s\n", a, "");
	printf("%010d %s\n", a, "");
	printf("%+010d %s\n", a, "");
	printf("%-10d %s\n", a, "");
	printf("%10o %s\n", a, "");
	printf("%010o %s\n", a, "");
	printf("%10x %s\n", a, "");
	printf("%0#10x %s\n", a, "");

	return 0;
}