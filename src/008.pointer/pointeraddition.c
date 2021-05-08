#include <stdio.h>


int main(){
	char a;
	char *pa;
	pa = &a;
	
	printf("pa의 값      : %p \n", pa);
	printf("(pa + 1)의 값 : %p \n", pa + 1);
	
	return 0;
}