#include <stdio.h>
//scanf_s ��� �ۼ� �� ���� �߻�
int main(void) {
	//�̸��� �Է��ϰ� ����ϴ� �Լ� ����
	char name[128];
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name, sizeof(name));
	printf("%s\n", name);

	//���̸� �Է��ϰ� ����ϴ� �Լ� ����
	int age;
	scanf("%d", age);
	printf("%d\n", age);

	//������ �Է��ϰ� ����ϴ� �Լ� ����
	double weight;
	scanf("%.1lf", weight);
	printf("%.1lf", weight);


	//Ű�� �Է��ϰ� ����ϴ� �Լ� ����
	float height;
	scanf("%.0f", height);

	//���˸� �Է��ϰ� ����ϴ� �Լ� ����
	char what[512];
	scanf(("%s", what, sizeof(what)));
	printf("%s\n", what);

	return 0;
}