#include <stdio.h>
int return_plus_one(int n){
	return n + 1;
}


int main(){
	int number = 3; 
	printf("%d\n", number);
	
	number = 4;
	printf("%d\n", number);
	
	number = return_plus_one(number);
	printf("%d\n", number);
	
	return 0;
}