#include <stdio.h>


int main()
{
	int a = 1, b = 1, c = 1, d = 1;
	
	a = a + 1;
	printf("a : %d \n", a); 
	
	b -= 1;
	printf("b: %d \n", b);
	// b = b + 1; 
	--c;
	printf("c : %d \n", c);
	
	d--;
	printf("d : %d \n", d);
	
	return 0;
}