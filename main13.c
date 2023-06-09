#include <stdio.h>
#include <string.h>

int main(void) {
//	======================== 1 ========================
//	프로그램 사용자로부터 알파벳 문자 하나 입력 받아서, 입력 받은 문자가 대
//	문자면 이를 소문자로 변환해서 출력해주고, 입력 받은 문자가 소문자면 이를
//	대문자로 변환해서 출력해주는 프로그램을 작성해보자.
//	- 단, 문자의 입출력에는 getchar 함수와 putchar 함수를 사용하고, 프로그램
//	사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를
//	간단히 출력하자.

//	int ch;
//	int dif;
//	
//	printf("문자 입력 : ");
//	
//	ch = getchar();
//	
//	dif = 'a' - 'A';
//	
////	printf("%d %d \n", 'a', 'A');
//	
//	if (ch >= 'A' && ch <= 'Z') {
////		ch += 32;
//		ch += dif;
//		putchar(ch);
//	} else if (ch >= 'a' && ch <= 'z') {
////		ch -= 32;
//		ch -= dif;
//		putchar(ch);
//	} else {
//		puts("범위를 벗어남.");
//	}
	
//	======================== 2 ========================
//	- 다음과 같이 총 3개의 배열을 먼저 선언하자.
//		- char str1[20], str2[20], str3[40];
//	- str1과 str2에 저장될 문자열을 fgets 함수를 사용하여 입력 받고, str1에 저
//	장된 문자열을 str3에 복사하고, str2에 저장된 문자열을 str3에 저장된 문자
//	열의 뒤에 덧붙인 다음, str3에 저장된 문자열을 출력하는 프로그램을 작성해
//	보자.
//		- 주의사항: fgets 함수를 통해서 문자열을 읽어들이면 \n 문자도 함께 읽혀지는데,
//	이는 문자열의 일부가 되지 않도록 해야 한다. 즉, str1과 str2에 저장된 문자열에
//	서 \n은 소멸시켜야 한다.

	char str1[20], str2[20], str3[40];
	int len;
	
	printf("첫 번째 문자열 입력 : ");
	fgets(str1, sizeof(str1), stdin);
	
	len = strlen(str1);
	
//	str1[len - 1] = 0; '\0'과 0은 null 문자임. 
	str1[len - 1] = '\0';
	
	printf("두 번째 문자열 입력 : ");
	fgets(str2, sizeof(str2), stdin);
	
	len = strlen(str2);

	str2[len - 1] = '\0';
	
	strcpy(str3, str1);
	
	strcat(str3, str2);
	
	printf("조합 결과 : %s", str3);
	
	return 0;
}




//	======================== 1 ========================
//	입출력 스트림 

//	stdin과 stdout은 각각 표준 입력 스트림과 표준 출력 스트림을 의미함
//	stderr는 표준 에러 스트림을 의미함
// 	stdin, stdout, stderr 모두 프로그램 시작과 동시에 자동으로 형성되고,
//	프로그램 종료 시 자동으로 소멸됨
// 	이들 이외의 스트림은 사용자가 직접 형성해야 함

//int putchar (int c);
// 인자로 전달된 문자를 모니터에 출력함

//int fputc (int c, FILE * stream);
// 함수의 두 번째 인자를 통해 출력 대상을 지정함

//int getchar (void);
// 키보드로 입력된 문자의 정보를 반환함

//int fgetc (FILE * stream);
// 문자를 입력받을 대상 정보를 인자로 전달함

//int puts (const char * s);
// 인자로 전달된 문자열을 모니터에 출력함

//int fputs (const char * s, FILE * stream);
// 함수의 두 번째 인자를 통해 출력 대상을 지정함

//char * gets (char * s);
//char * fgets (char * s, int n, FILE * stream);
// 파일의 끝에 도달하거나 함수호출 실패 시 NULL 포인터 반환



//	======================== 2 ========================
//	버퍼	

//	버퍼링을 하는 이유는 데이터 이동의 효율과 관련이 있음
//	데이터를 모아서 전송하면, 하나씩 전송하는 것보다 효율적임


//입출력 버퍼
//	- 버퍼는 특정 크기의 메모리 공간을 의미함
//	- 운영체제는 입력과 출력을 돕는 입출력 버퍼를 생성하여 제공함
//	- 표준 입출력 함수를 기반으로 데이터 입출력 시 입출력 버퍼를 거침

//입출력 버퍼에 데이터가 전송되는 시점
//	- 호출된 출력 함수가 반환되는 시점이 출력 버퍼로 데이터가 완전히 전송된 시점임
//	- 엔터를 입력하는 시점이 키보드로 입력된 데이터가 입력 버퍼로 전달되는 시점임
