#include<stdio.h>
void swap(int c, int d); // 함수 선언
void swap_addr(int* c, int* d);
void changeArray(int* ptr);

int main(void)
{
	// 포인터

	// [철수] : 101호 -> 메모리 공간의 주소
	// [영희] : 201호
	// [민수] : 301호
	// 각 문 앞에 암호가  걸려있음
	int 철수 = 1; // 암호 : 1
	int 영희 = 2;
	int 민수 = 3;

	
	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	// 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	int *미션맨; // 포인터 변수 선언 : 변수명 앞에 *을 붙혀준다
	미션맨 = &철수; // 미션맨이 철수의 주소값을 할당 : 할당할 변수이름(철수)앞에 &를 붙혀준다
	printf("미션맨이 방문하는 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희; 
	printf("미션맨이 방문하는 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수; 
	printf("미션맨이 방문하는 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	// 두번째 미션 : 각 암호에 3을 곱해라
	미션맨 = &철수;
	*미션맨 = *미션맨 *3 ;
	printf("미션맨이 암호를 바꾼 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 %d, 암호 : %d\n", 미션맨, *미션맨);

	// 스파이등장
	// 미션맨이 바꾼 암호에서 2를 빼라

	// 스파이도 미션맨이 가르키고있는 메모리 주소를 가리킨다
	int* 스파이 = 미션맨;

	스파이 = &철수;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &영희;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &민수;
	*스파이 = *스파이 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	// 참고로 미션맨,스파이가 사는 곳의 주소 : &미션맨, &스파이 로 확인
	printf("미션맨이 사는 주소 : %d\n", &미션맨);
	printf("스파이가 사는 주소 : %d\n", &스파이);


	// 배열
	printf("-------배열--------\n ");
	int arr[3] = { 5,10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	}

	printf("-------포인터의 값 변경 후--------\n ");
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++) {
		//printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
		printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));

	}

	for (int i = 0; i < 3; i++) {
		//printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
		printf("포인터 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
	}
	// *(arr + i) == arr[i] : 똑같은 표현
	// arr == arr 배열의 첫번째 값의 주소와 동일하다 == &arr[0]
	// *& 는 아무것도 없는 것과 같다 : &는 주소, *은 그 주소의 값이기 때문
	// *& 는 서로 상쇄된다
 

	// SWAP 함수 : 변수의 값을 바꾼다
	int c = 10;
	int d = 20;
	printf("SWAP 함수 전 => c : %d, d : %d\n", c, d);
	swap(c, d);
	printf("SWAP 함수 후 => c : %d, d : %d\n", c, d);

	// 값에 의한 복사(Call by Value) -> 값만 복사한다는 의미
	// 메모리 공간에 있는 주소값 자체를 넣어줘야한다
	printf("SWAP 함수 전(주소값 전달) => c : %d, d : %d\n", c, d);
	swap_addr(&c, &d);
	printf("SWAP 함수 후(주소값 전달) => c : %d, d : %d\n", c, d);

	// 포인터로 배열값 변경하기
	int arr2[3] = { 10, 20, 30 };
	printf("------배열값 변경 전-------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	changeArray(arr2);
	printf("------배열값 변경 후-------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	return 0;
}
void swap(int c, int d) {
	int temp = c;
	c = d;
	d = temp;
	printf("SWAP 함수 내 => c : %d, d : %d\n", c, d);
}

void swap_addr(int *c, int *d) {
	int temp = *c;
	*c = *d;
	*d = temp;
	printf("SWAP 함수 내(주소값 전달)=> c : %d, d : %d\n", *c, *d);
}
void changeArray(int* ptr) {
	ptr[2] = 50;
}