#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct account {
	char name[10]; // ����
	int account_num;  // ���¹�ȣ
	int balance;    // �ܾ�
}Account;

int main() {
	Account d[3];
	int num;	// �Է��ϴ� ���¹�ȣ
	int account_index = 0;
	int client_index = -1;
	//���¹�ȣ �˻�
	while(true) {
		printf("���¹�ȣ�� �Է��ϼ���>>");
		scanf("%d", &num);
		client_index = -1;
		if (num == 9999) 
			return 0;
		// ������ ���°� �ִ��� Ȯ��
		for (int i = 0; i < 3; i++) {
			// ���¸� ã�Ҵ�!
			if (num == d[i].account_num) {

				printf("���¸� ã�ҽ��ϴ�\n");
				client_index = i; // ã�� ������ �ε���
				break;
			}
		}
		// ���¸� �����Ѵ�
		if (account_index == 3 && client_index==-1) {
			printf("���̻� ���¸� ������ �� �����ϴ�\n\n");
			continue;
		}
		else if (client_index == -1) {
			printf("���¸� �����մϴ�\n");
			printf("������ ���¸� �Է��ϼ��� >>");
			scanf("%d", &num);
			d[account_index].account_num = num;
			d[account_index].balance = 0;
			printf("�̸��� �Է��ϼ��� >>");
			scanf("%s",
				d[account_index].name,
				sizeof(d[account_index].name));
			getchar();
			client_index = account_index;
			account_index++;
		}

		while(true) {
			int menu;
			printf("1. �Ա�\n2. ���\n3. �ܾ���ȸ\n4. ����\n");
			printf(">>");
			scanf("%d", &menu);
			int money;
			switch (menu) {
			case 1:
				printf("�Ա�>>");
				scanf("%d", &money);
				d[client_index].balance += money;
				break;
			case 2:
				printf("���>>");
				scanf("%d", &money);
				if (d[client_index].balance >= money)
					d[client_index].balance -= money;
				else
					printf("�ܾ��� �����մϴ�\n");
				break;
			case 3:
				printf("�ܾ� : %d��\n\n", d[client_index].balance);
				break;
			case 4:
				break;
			default:
				break;
			}
			if (menu == 4) {
				printf("�����մϴ�\n\n");
				break;
			}
		}
	}
}
