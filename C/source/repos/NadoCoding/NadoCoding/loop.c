#include<stdio.h>

int main_loop(void)
{
	printf("++ 연산자\n");
	int a = 10;
	// ++이 앞에 붙으면 ++를 실행 후 출력
	printf("a는 %d\n", ++a);
	// ++이 뒤에 붙으면 해당 문장 수행 후 ++ 이 적용되는것
	printf("a는 %d\n", a++);
	printf("a는 %d\n", a);

	printf("반복문 : for, while, do while\n");
	printf("for문 : for(선언; 조건; 증감; { } \n");
	printf("반복문 : for 예시\n");
	for (int i = 1; i <= 3; i++) {
		printf("Hello world %d\n", i);
	}

	printf("while문 : while(조건){ } \n");
	printf("반복문 : while 예시 \n");

	int i = 1;
	while (i <= 3)
	{
		
		printf("Hello world %d\n", i++);
	}

	printf("do while문 : do{ } while(조건){ } \n");
	printf("반복문 : do while 예시 \n");
	int j = 1;
	do {
		printf("Hello world %d\n", j++);

	} while (j <= 3);


	printf("반복문 :2중 반복문 예시 \n");
	for (int i = 1; i <= 3; i++) {
		printf("첫번째 반복문 : %d\n", i);

		for (int j = 1; j <= 2; j++) {
			printf("           두번째 반복문 : %d\n", j);
		}
	}
	
	printf("반복문 :2중 반복문 활용한 구구단 출력 \n");

	for (int i = 2; i <= 3; i++) {
		printf(" %d단 계산 \n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d * %d = %d\n", i, j, i * j);
		}
	}

	printf("반복문 :2중 반복문 활용한 별 출력 \n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("반복문 :2중 반복문 활용한 별 출력 \n");
	for (int i = 0; i <= 5; i++) {
		
		for (int j = i; j <= 5-1; j++) {
			printf(" ");
			
		}for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;


}