#include <stdio.h>

int main() {
	// int�� choice �Լ��� �ʱ�ȭ
	int choice;

	// ����ڿ��� �Է°��� �ޱ� ���� ����
	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");

	// ����ڿ��� �Է°��� �޴� �Լ�
	scanf_s("%d", &choice);

	// choice�� 1�ΰ�� "������ �����մϴ�." ���
	if (choice == 1) {
		printf("������ �����մϴ�.");
	} // choice�� 2�ΰ�� "���� ���� �ݽ��ϴ�." ���
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.");
	} // choice�� 3�ΰ�� "�����մϴ�." ���
	else if (choice == 3) {
		printf("�����մϴ�.");
	} // choice�� 1~3�� �ƴѰ�� "�߸� �Է��ϼ̽��ϴ�." ���
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");;
	}
}