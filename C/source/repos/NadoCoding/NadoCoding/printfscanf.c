#include  <stdio.h>
int main_printfscanf(void)
{
	printf("������ ������ ���� ����\n");
	int age1 = 12;
	printf("%d\n", age1);
	age1 = 13;
	printf("%d\n", age1);

	printf("�Ǽ��� ������ ���� ����\n");
	float f = 46.5;
	printf("%f\n", f); // 46.500000 ���
	printf("%.2f\n", f); // 46.50 ��� => .������ �Ҽ��� ����ϰ����ϴ� �ڸ��� �Է�
	double d = 4.428;
	printf("%lf\n", d); // 4.428000 ���
	printf("%.2lf\n", d); // 4.43 ��� => �ݿø�

	printf("����� ���� ����\n");
	// ���� Ÿ�Ծտ� const �����ָ� �޴� => ������ �ʴ¼� , ���� �ȵ�
	const int YEAR = 2000;
	printf("�¾ �⵵ = %d\n", YEAR);

	printf(" printf ��� ����\n");
	// ����
	int add = 3 + 7;
	printf("3+7 = %d\n", add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);

	printf("scanf ��뿹��\n");
	// Ű���� �Է��� �޾Ƽ� ����
	int input;
	 printf("���� �Է��ϼ���\n");
	// input�̶�� ������ �������� �Է¹޴´�
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n",one);
	printf("�ι�° �� : %d\n",two);
	printf("����° �� : %d\n",three);

	printf("����( �� ����), ���ڿ�(�� ���� �̻��� ���� ����)\n");
	char c = 'A';
	printf("%c\n", c);

	printf("�迭 ����\n");
	char str[256];
	printf("���ڿ��� & �Ⱥ����� �ǰ�, ����� ǥ���ؾߵȴ�\n");
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	printf("������Ʈ \n");
	printf("�������� �������� ������ �Լ�(���� �ۼ�)\n");
	printf("�̸�, ����, ������, Ű, ���˸�?\n");
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));

	printf("���� ���� ���");
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�     : %s\n", name);
	printf("����     : %d\n", age);
	printf("������   : %.2f\n", weight);
	printf("Ű       : %.2lf\n", height);
	printf("���˸�   : %s\n", what);
	return 0;

}