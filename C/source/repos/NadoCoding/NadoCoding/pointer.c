#include<stdio.h>
void swap(int c, int d); // �Լ� ����
void swap_addr(int* c, int* d);
void changeArray(int* ptr);

int main(void)
{
	// ������

	// [ö��] : 101ȣ -> �޸� ������ �ּ�
	// [����] : 201ȣ
	// [�μ�] : 301ȣ
	// �� �� �տ� ��ȣ��  �ɷ�����
	int ö�� = 1; // ��ȣ : 1
	int ���� = 2;
	int �μ� = 3;

	
	printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	// �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
	int *�̼Ǹ�; // ������ ���� ���� : ������ �տ� *�� �����ش�
	�̼Ǹ� = &ö��; // �̼Ǹ��� ö���� �ּҰ��� �Ҵ� : �Ҵ��� �����̸�(ö��)�տ� &�� �����ش�
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &����; 
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &�μ�; 
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	// �ι�° �̼� : �� ��ȣ�� 3�� ���ض�
	�̼Ǹ� = &ö��;
	*�̼Ǹ� = *�̼Ǹ� *3 ;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &����;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &�μ�;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	// �����̵���
	// �̼Ǹ��� �ٲ� ��ȣ���� 2�� ����

	// �����̵� �̼Ǹ��� ����Ű���ִ� �޸� �ּҸ� ����Ų��
	int* ������ = �̼Ǹ�;

	������ = &ö��;
	*������ = *������ - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	������ = &����;
	*������ = *������ - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	������ = &�μ�;
	*������ = *������ - 2;
	printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	// ������ �̼Ǹ�,�����̰� ��� ���� �ּ� : &�̼Ǹ�, &������ �� Ȯ��
	printf("�̼Ǹ��� ��� �ּ� : %d\n", &�̼Ǹ�);
	printf("�����̰� ��� �ּ� : %d\n", &������);


	// �迭
	printf("-------�迭--------\n ");
	int arr[3] = { 5,10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
	}

	printf("-------�������� �� ���� ��--------\n ");
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++) {
		//printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
		printf("�迭 arr[%d] �� �� : %d\n", i, *(arr + i));

	}

	for (int i = 0; i < 3; i++) {
		//printf("������ ptr[%d] �� �� : %d\n", i, ptr[i]);
		printf("������ ptr[%d] �� �� : %d\n", i, *(ptr + i));
	}
	// *(arr + i) == arr[i] : �Ȱ��� ǥ��
	// arr == arr �迭�� ù��° ���� �ּҿ� �����ϴ� == &arr[0]
	// *& �� �ƹ��͵� ���� �Ͱ� ���� : &�� �ּ�, *�� �� �ּ��� ���̱� ����
	// *& �� ���� ���ȴ�
 

	// SWAP �Լ� : ������ ���� �ٲ۴�
	int c = 10;
	int d = 20;
	printf("SWAP �Լ� �� => c : %d, d : %d\n", c, d);
	swap(c, d);
	printf("SWAP �Լ� �� => c : %d, d : %d\n", c, d);

	// ���� ���� ����(Call by Value) -> ���� �����Ѵٴ� �ǹ�
	// �޸� ������ �ִ� �ּҰ� ��ü�� �־�����Ѵ�
	printf("SWAP �Լ� ��(�ּҰ� ����) => c : %d, d : %d\n", c, d);
	swap_addr(&c, &d);
	printf("SWAP �Լ� ��(�ּҰ� ����) => c : %d, d : %d\n", c, d);

	// �����ͷ� �迭�� �����ϱ�
	int arr2[3] = { 10, 20, 30 };
	printf("------�迭�� ���� ��-------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	changeArray(arr2);
	printf("------�迭�� ���� ��-------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	return 0;
}
void swap(int c, int d) {
	int temp = c;
	c = d;
	d = temp;
	printf("SWAP �Լ� �� => c : %d, d : %d\n", c, d);
}

void swap_addr(int *c, int *d) {
	int temp = *c;
	*c = *d;
	*d = temp;
	printf("SWAP �Լ� ��(�ּҰ� ����)=> c : %d, d : %d\n", *c, *d);
}
void changeArray(int* ptr) {
	ptr[2] = 50;
}