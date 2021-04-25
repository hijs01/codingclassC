#include <stdio.h>

int main()
{
	int a = 127;
	printf("%d의 %o은 %d 진수 표현입니다 : \n", a, a, 8);
	printf("%d의 %d은 %d 진수표편입니다 : \n", a, a, 10);
	printf("%d의 %x은 %d 진수표현입니다.: \n", a, a, 16);
// 127의 177은 8 진수 표현입니다.

	// printf("%d의 %d 진수표현은 : %o \n", a, 8, a);
	// printf("%d의 %d 진수표현은 : %d \n", a, 10, a);
	// printf("%d의 %d 진수표현은 : %d \n", a, 16, a);
	return 0;
}