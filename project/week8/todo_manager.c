#include <stdio.h>

//��� �ʱ�ȭ
#define MAX_TASKS 10 //�� ���� �� 10�� ������ �޴´�
#define CHAR_NUM 100  //�� ���� ���ڴ� �� 100���� �� ������

#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM]; //�� �� ����� �����ϴ� 2���� �迭 ����
int taskCount = 0; // �� �� ���� �����ϴ� ���� ����

void addTask() { //�� �� �߰��ϴ� �Լ�
	if (taskCount >= MAX_TASKS) { //�� �� ���� �� á�� ��� ����ϴ� ���ǹ�
		printf("�� ���� �� á���ϴ�.\n");
		return 0;
	}

	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", tasks[taskCount],(int)sizeof(tasks[taskCount])); //����ڿ��� �� �� �Է� �� tasks�迭�� ����
	printf("�� �� \"%s\" (��) �� ����Ǿ����ϴ�. \n", tasks[taskCount]);
	taskCount++; //����ڿ��� �� ���� �Է¹��� �� ���� 1���� �ø�
}

void deleteTasks() { //�� ���� �Է¹ް� �����ϴ� �Լ�
	if (taskCount == 0) { //�� ���� 0���� ��� ����ϴ� ���ǹ�
		printf("�� �� ����� ������ ���� �����ϴ�.");
		return;
	}

	printf("�� �� ���: \n");
	for (int i = 0; i < taskCount; i++) { //�� �� ����� ����ϴ� �ݺ���
		printf("%d. %s\n", i + 1, tasks[i]);
	}

	int delIndex; //���� ���� ���� �Է¹��� ���� ����
	printf("������ ���� ��ȣ�� �Է����ּ��� (1���� ����): ");
	scanf_s("%d", &delIndex); //���� ���� ��ȣ �Է°��� delIndex �Լ��� ����

	if (delIndex < 1 || delIndex > taskCount) { // delIndex �� 1���� �۰ų� 10���� ū��� ����ϴ� ���ǹ�
		printf("���� ������ ������ϴ�. \n");
		return;
	}

	printf("%d. %s: �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

	//���� ���� ��ȣ �� ���� ����
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
	taskCount--; //�� �� -1
	printf("�� ���� �����Ǿ����ϴ�.\n");
}
//�� ���� ����ϴ� �Լ�
void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}
//�� ���� �����ϴ� �Լ�
void changeTask() {

	int changeTask; //���� �� ���� ��ȣ�� �����ϴ� ���� ����
	printf("������ �� ���� ��ȣ�� �Է����ּ��� (1���� ����): ");
	scanf_s("%d", &changeTask); //���� �� ���� ��ȣ�� �Է¹ް� changeTask�� ����

	printf("������ ������ �Է��ϼ���: ");
	scanf_s("%s", tasks[changeTask - 1],(int)sizeof(tasks[changeTask -1])); //���� �� ���� ��ȣ�� �Է¹ް� ����Ʈ�� ����
	printf("%d. %s: �� ���� �����Ǿ����ϴ�.\n", changeTask, tasks[changeTask - 1]);
}

int main() {
	printf("TODO ����Ʈ ����!\n");

	while (1) {
		int choice; //������� �Է°��� �޴� ���� ����
		int terminate = 0; //���α׷��� �����ϴ� ���� ����

		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			addTask();
			break;
		case 2:
			deleteTasks();
			break;
		case 3:
			printf("�� �� ���\n");
			printTask(taskCount);
			break;
		case 4:
			terminate = 1;
			break;
		case 5:
			changeTask();
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
			break;
		}	
		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
	}
	return 0;
}




