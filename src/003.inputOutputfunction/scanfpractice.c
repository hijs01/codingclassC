#include <stdio.h>

	int main()
	{
	double celsius;
		printf("섭시온도를 화씨 온도로 바꿔주는 프로그램입니다.");
		printf("섭시 온도를 입력해주세요.");
		scanf("%lf",&celsius);
		
		printf("섭씨 %f 도는 화씨 %f도 입니다. \n", celsius, 9 * celsius/ 5 + 32);
	return 0;
	}