#include  <stdio.h>
int main(void)
{
	// ������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ������ ���� ����
	float f = 46.5;
	printf("%f\n", f); // 46.500000 ���
	printf("%.2f\n", f); // 46.50 ��� => .������ �Ҽ��� ����ϰ����ϴ� �ڸ��� �Է�
	double d = 4.428;
	printf("%lf\n", d); // 4.428000 ���
	printf("%.2lf\n", d); // 4.43 ��� => �ݿø�

	// ����� ���� ����
	// ���� Ÿ�Ծտ� const �����ָ� �޴� => ������ �ʴ¼� , ���� �ȵ�
	const int YEAR = 2000;
	printf("�¾ �⵵ = %d\n", YEAR);

	// printf ��� ����
	// ����
	int add = 3 + 7;
	printf("3+7 = %d\n", add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);
	return 0;

}