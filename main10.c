#include <stdio.h>

int main(void) {
//	===================== 1차원 배열 =====================

//	===================== 1 =====================
//	기본 
	
//	int arr[5];
//	
//	int i, sum = 0;
//	
//	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//	
//	for(i=0;i<5;i++) {
//		sum += arr[i];
//	}
//	
//	printf("배열 원소의 합 : %d", sum);

//	===================== 1-1 =====================
//	입력받은 정수의 총합, 최대값, 최소값 구하기 

//	int arr[5];
//	int i, sum = 0, max, min;
//	
//	printf("정수 5개 입력 : ");
//	
//	for(i=0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	
//	max = arr[0]; // 최대값 가정하기.
//	min = arr[0]; // 최소값 가정하기.
//	
//	for(i = 1; i < 5; i++) {
//		if(max < arr[i]) {
//			max = arr[i];
//		}
//		
//		if(min > arr[i]) {
//			min = arr[i];
//		}
//	} 
//	
//	printf("총합 : %d \n", sum);
//	printf("쵀대 : %d \n", max);
//	printf("쵀소 : %d \n", min);

//	===================== 2 =====================
//	선언과 동시에 초기화

//	int arr1[5] = {1,2,3,4,5};
//	int arr2[] = {1,2,3,4,5};	// int arr2[5]  = {1,2,3,4,5}; 와 같음 
//	int arr3[5] = [1,2];		// int arr3[5] = {1,2,0,0,0}; 부족한 부분은 0으로 채워짐 

//	int arr1[5] = {1,2,3,4,5};
//	int arr2[] = {1,2,3,4,5,6,7};
//	int arr3[5] = {1,2};
//	
//	int ar1Len, ar2Len, ar3Len, i;
//	
//	printf("배열 1의 크기 : %d \n", sizeof(arr1));
//	printf("배열 2의 크기 : %d \n", sizeof(arr2));
//	printf("배열 3의 크기 : %d \n", sizeof(arr3));
//	
//	ar1Len = sizeof(arr1) / sizeof(int);
//	ar2Len = sizeof(arr2) / sizeof(int);
//	ar3Len = sizeof(arr3) / sizeof(int);
//	
//	printf("\n 배열 arr1 : ");
//	
//	for(i=0;i<ar1Len;i++) {
//		printf("%d ", arr1[i]);
//	} 
//	printf("\n 배열 arr2 : ");
//	
//	for(i=0;i<ar2Len;i++) {
//		printf("%d ", arr2[i]);
//	} 
//	
//	printf("\n 배열 arr3 : ");
//	
//	for(i=0;i<ar3Len;i++) {
//		printf("%d ", arr3[i]);
//	} 

//	===================== 2-1 =====================
//	영어 단어를 입력 받아서 char 형 배열로 저장한 후, 단어의 길이를 구하기 

//	char voca[100];
//	int len = 0;
//	
//	printf("영어 단어 입력 : ");
//	scanf("%s", voca);
//	
//	while(voca[len] != '\0') {
//		len++;
//	}
//	
//	printf("입력된 영어 단어의 길이 : %d", len);

//	===================== 3 =====================
	
//	char str[] = "Good morning!";
//	
//	printf("배열 str의 크기 : %d \n", sizeof(str));
//	printf("널 문자 문자형 출력 : %c \n", str[13]);
//	printf("널 문자 정수형 출력 : %d \n", str[13]);
//	
//	str[12] = '?';
//	printf("문자열 출력 : %s \n", str);
//	
//	str[5] = '\0';
//	printf("문자열 출력 : %s", str); 	// %s 서식문자 = 문자열 배열 처음부터 시작 하며 처음 나오는 null값까지 출력 

//	char arr1[] = {'H', 'i', '~'};		// null이 없으므로 문자 
//	char arr2[] = {'H', 'i', '~', '\0'};// null이 존재하면 문자열 

//	===================== 3-1 =====================
//	영어 단어를 입력 받아서 char 형 배열로 저장한 후, 입력된 단어를 거꾸로 출력하기 

//	char voca[100];
//	int len = 0;
//	
//	printf("영어 단어 입력 : ");
//	scanf("%s", voca);
//	
//	while(voca[len] != '\0') {
//		len++;
//	}
//	
//	printf("입력된 영어 단어의 길이 : %d \n", len);
//	
//	for(len--; len >= 0; len--) {	//	len--; // 마지막 null문자 제거 
//		printf("%c", voca[len]);
//	}

//	===================== 4 =====================
	
//	char str[50];
//	int idx = 0;
//	
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("입력 받은 문자열 : %s \n", str);
//	
//	printf("문자 단위 출력 : ");
//	
//	while(str[idx] != '\0') {
//		printf("%c", str[idx]);
//		idx++;
//	} 

//	===================== 다차원 배열(2차원) =====================

//	===================== 1 =====================

//	int arr1Dim[10];		// 1차원
//	int arr2Dim[5][5];		// 2차원
//	int arr3Dim[3][3][3];	// 3차원 

//	int arr1[3][4];
//	int arr2[7][9];
//	
//	printf("세로 3, 가로 4 : %d \n", sizeof(arr1));
//	printf("세로 7, 가로 9 : %d \n", sizeof(arr2));

//	===================== 1-1 =====================
//	구구단 2,3,4단 넣기
	
//	int a[3][9];
//	int i, j;
//	
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 9; j++) {
//			a[i][j] = (i+2) * (j + 1);
//			
//			printf("%3d ", a[i][j]);   // 오른쪽 정렬 
////			printf("%-3d ", a[i][j]);  // 왼쪽정렬 
//		}
//		printf("\n");
//	}

//	===================== 2 =====================
//	빌라의 인구수 구하기 

//	int villa[3][2], popu, i, j;
//	
//	for(i = 0; i < 3; i++) {
//		for(j = 0;j < 2 ; j++) {
//			printf("%d층 %d호 인구수 : ", i+1, j+1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//	
//	printf("===============\n");
//	
//	for(i = 0; i < 3; i++) {
//		popu = 0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//
//		printf("%d층 인구수 : %d \n", i+1, popu);
//	}

//	===================== 2-1 =====================
//	배열 A를 배열 B로 변경하기, 단 배열 A는 선언과 동시에 초기화하고, 배열 B는 배열 A를 사용해서 초기화한 후 출력 

//	int a[2][3] = {
//		{1,2,3}, 
//		{4,5,6}
//	};
	
	int a[2][3] = {{1,2,3}, {4,5,6}};
	int b[3][2], i, j;
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			b[j][i] = a[i][j];
			
			printf("%d ", b[j][i]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

//	===================== 3 =====================
//	배열 주소값 확인하기 

//	int arr[3][2];
//	int i, j;
//	
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 2; j++) {
//			printf("%p \n", &arr[i][j]);
//		}
//	}
	
//	===================== 4 =====================

//	int arr[3][3] = {
//		1,2,3,
//		4,5,6,
//		7
//	};
//	
//	int arr[3][3] = {1,2,3,4,5,6,7};
//	
//	int arr[3][3] = {
//		{1, 2, 3}, 
//		{4,5,6}, 
//		{7,8,9}
//	}; 

//	부분적 생략 가능 
//	int arr1[][4] = {1,2,3,4,5,6,7,8};	// arr1[2][4]
//	int arr2[][2] = {1,2,3,4,5,6,7,8};  // arr2[4][2]

//	===================== 다차원 배열(3차원) =====================

//	===================== 1 =====================

	
	
	return 0;
}
