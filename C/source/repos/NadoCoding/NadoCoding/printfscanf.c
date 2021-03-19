#include  <stdio.h>
int main(void)
{
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수에 대한 예제
	float f = 46.5;
	printf("%f\n", f); // 46.500000 출력
	printf("%.2f\n", f); // 46.50 출력 => .다음에 소숫점 출력하고자하는 자릿수 입력
	double d = 4.428;
	printf("%lf\n", d); // 4.428000 출력
	printf("%.2lf\n", d); // 4.43 출력 => 반올림

	// 상수에 대한 예제
	// 변수 타입앞에 const 붙혀주면 왼다 => 변하지 않는수 , 수정 안됨
	const int YEAR = 2000;
	printf("태어난 년도 = %d\n", YEAR);

	// printf 사용 예제
	// 연산
	int add = 3 + 7;
	printf("3+7 = %d\n", add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);
	return 0;

}