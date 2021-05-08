#include <stdio.h>


int main()
{
	double arr[10];
	int i = 0;
	double ave= 0;
		for (i = 0; i < 10; i++)
	{
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%f", &arr[i]);
		
	}
	for (i = 0; i < 10; i++)
	{
		ave = ave + arr[i];
		
	}
ave = ave / 10; 
	printf("전체 학생의 평균은: %f \n", ave);
	for( i = 0; i < 10; i++)
	{
		printf("학생 %f :", i + 1);
		if (arr[1] >= ave)
		{
			printf("합격 \n");
			
		}
		else
		{
			printf("불합격 \n");
		}
	
	return 0;
	}


}