#include <stdio.h>


int main()
	
{
	int a = 1; 
	printf(" 전위 연산자 수형후 : %d \n", --a);
	
	a = 1;
	printf("후위 연산자 수행 후: %d", a--);
	printf("최종 : %d \n", a);
	
	return 0;
}