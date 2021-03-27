#include  <stdio.h>
int main_printfscanf(void)
{
	printf("정수형 변수에 대한 예제\n");
	int age1 = 12;
	printf("%d\n", age1);
	age1 = 13;
	printf("%d\n", age1);

	printf("실수형 변수에 대한 예제\n");
	float f = 46.5;
	printf("%f\n", f); // 46.500000 출력
	printf("%.2f\n", f); // 46.50 출력 => .다음에 소숫점 출력하고자하는 자릿수 입력
	double d = 4.428;
	printf("%lf\n", d); // 4.428000 출력
	printf("%.2lf\n", d); // 4.43 출력 => 반올림

	printf("상수에 대한 예제\n");
	// 변수 타입앞에 const 붙혀주면 왼다 => 변하지 않는수 , 수정 안됨
	const int YEAR = 2000;
	printf("태어난 년도 = %d\n", YEAR);

	printf(" printf 사용 예제\n");
	// 연산
	int add = 3 + 7;
	printf("3+7 = %d\n", add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);

	printf("scanf 사용예제\n");
	// 키보드 입력을 받아서 저장
	int input;
	 printf("값을 입력하세요\n");
	// input이라는 변수에 정수형을 입력받는다
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n",one);
	printf("두번째 값 : %d\n",two);
	printf("세번째 값 : %d\n",three);

	printf("문자( 한 글자), 문자열(한 글자 이상의 여러 글자)\n");
	char c = 'A';
	printf("%c\n", c);

	printf("배열 선언\n");
	char str[256];
	printf("문자열은 & 안붙혀도 되고, 사이즈를 표기해야된다\n");
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	printf("프로젝트 \n");
	printf("경찰관이 범죄자의 정보를 입수(조서 작성)\n");
	printf("이름, 나이, 몸무게, 키, 범죄명?\n");
	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	printf("조서 내용 출력");
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름     : %s\n", name);
	printf("나이     : %d\n", age);
	printf("몸무게   : %.2f\n", weight);
	printf("키       : %.2lf\n", height);
	printf("범죄명   : %s\n", what);
	return 0;

}