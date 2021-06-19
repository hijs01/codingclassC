#include <stdio.h>
#define FilePath "Files/a,txt"

int main(){
FILE *fp;
fp = fopen(FilePath, "w");

if (fp == NULL){
	printf("Write Error!!\n");
	return 0;
	
}

fputs("Hello World!!!\n", fp);
	printf("파일 출력 완료\n");
	fclose(fp);
	
	
	return 0;


}
