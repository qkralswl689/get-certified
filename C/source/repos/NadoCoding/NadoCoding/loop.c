#include<stdio.h>

int main_loop(void)
{
	printf("++ ������\n");
	int a = 10;
	// ++�� �տ� ������ ++�� ���� �� ���
	printf("a�� %d\n", ++a);
	// ++�� �ڿ� ������ �ش� ���� ���� �� ++ �� ����Ǵ°�
	printf("a�� %d\n", a++);
	printf("a�� %d\n", a);

	printf("�ݺ��� : for, while, do while\n");
	printf("for�� : for(����; ����; ����; { } \n");
	printf("�ݺ��� : for ����\n");
	for (int i = 1; i <= 3; i++) {
		printf("Hello world %d\n", i);
	}

	printf("while�� : while(����){ } \n");
	printf("�ݺ��� : while ���� \n");

	int i = 1;
	while (i <= 3)
	{
		
		printf("Hello world %d\n", i++);
	}

	printf("do while�� : do{ } while(����){ } \n");
	printf("�ݺ��� : do while ���� \n");
	int j = 1;
	do {
		printf("Hello world %d\n", j++);

	} while (j <= 3);


	printf("�ݺ��� :2�� �ݺ��� ���� \n");
	for (int i = 1; i <= 3; i++) {
		printf("ù��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 2; j++) {
			printf("           �ι�° �ݺ��� : %d\n", j);
		}
	}
	
	printf("�ݺ��� :2�� �ݺ��� Ȱ���� ������ ��� \n");

	for (int i = 2; i <= 3; i++) {
		printf(" %d�� ��� \n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d * %d = %d\n", i, j, i * j);
		}
	}

	printf("�ݺ��� :2�� �ݺ��� Ȱ���� �� ��� \n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("�ݺ��� :2�� �ݺ��� Ȱ���� �� ��� \n");
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