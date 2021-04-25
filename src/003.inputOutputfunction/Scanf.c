#include <stdio.h>

	int main()
{
	double celsicus;
	
	printf("섭씨 온도를 화씨 온도로 변환해주는 프로그램입니다.\n");
	printf("섭씨 온도를 입력해주세요: ");
	scanf("%lf", &celsicus);
	
		printf("섭씨 %f 도는 화씨로 %f 도 입니다. \n", celsicus, 9 *celsicus /5 +32);
		return 0;
	}
