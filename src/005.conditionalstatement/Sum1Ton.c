#include <stdio.h>


int main()
{
	int i, tonum = 100, sum = 0;
	for (i =1; i <=tonum; ++i)
	{
//sum = sum + i; 
	sum +=i;}

printf("1부터 %d까지의 합: %d \n", tonum,sum);
	return 0;

}