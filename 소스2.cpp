#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float a = 0, b = 0, c = 0;
	printf("세 가지의 섭씨 온도를 소수로 입력하여라: ");
	scanf("%f, %f, %f", &a, &b, &c);
	printf("%10.4f, %10.4f, %10.4f\n", (9.0 / 5.0) * a + 32.0, (9.0 / 5.0) * b + 32.0, (9.0 / 5.0) * c + 32.0);

	return 0;
}
