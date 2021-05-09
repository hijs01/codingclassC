#include <stdio.h>
#include <string.h>

int main(){
	 char words[100];
	char alphabet[30];
	int counter [30] = {0,};
	int count = 0;
	
	
	printf("문자를 입력하세요: ");
	scanf("%s", words);
	
	printf("문자열 : %s \n", word);

	
	for(int i = 0; i <+ 25; i ++){
		alphabet[i] = i + 97; }
		
		

	
for (int i = 0; i <= 25; i++){
	for(int j = 0; j <= strlen(word); j++){
		//비교
		if (alphabet[i] == word[j]){
			counter[i] = ++count;
		}
	} 
	return 0;
}
	

	
	
	
	
	
	
	
	









// # 공백문자는 없다.
// # 영문 간판용 문자.

// S : 1
// 0 : 2


// 1. 사용자의 뮨자열을 입력 (배열 : word)
// 2. 영문을 저장할 배열 (alphabet)
// 3. 비교 결과룰 저장할 배열 (counter)
// 4. word배열과 alphabet 배열과 원소를 비교 (반복, for/while)
// 	4.1 같으면 counter 배열의 인덱스에 갯수 저장 (if)
// 	4.2 다르면 아무처리 없음 
// 5. alphabet 배열의 크기만큼 반복돼서 결과 출력 