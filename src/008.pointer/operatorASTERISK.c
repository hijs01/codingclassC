#include <stdio.h>


int main() {
	
	int *p; //*(asterisk) : 포인터 타입 선언
	int a;
	
	p = &a;
	*p = 3; 
	
	printf("a 의 값 : %d \n", a);
	printf("*p 의 값 : %d \n", *p); //*(asterisk):연산자 
	return 0;
}