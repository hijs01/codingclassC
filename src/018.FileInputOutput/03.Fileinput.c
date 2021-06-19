#include <stdio.h>
#define FilePath "/workspace/codingclassC/src/018.FileInputOutput/Files/a.txt"

int main(){
	FILE *fp = fopen(FilePath, "r");
	char c;
	
	printf("한 글자씩 입력 받기: ");
	while ((c = fgetc(fp)) != E0F) {//fgetcc : fp에서 한문자씩 읽음, 파일의 제일 마지막 : EDF(End Of File : -1)
		printf("%c",c);
	}
	fclose(fp);
	
	return 0;
	
	
	
}