#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct account {
	char name[10]; // 고객명
	int account_num;  // 계좌번호
	int balance;    // 잔액
}Account;

int main() {
	Account d[3];
	int num;	// 입력하는 계좌번호
	int account_index = 0;
	int client_index = -1;
	//계좌번호 검색
	while(true) {
		printf("계좌번호를 입력하세요>>");
		scanf("%d", &num);
		client_index = -1;
		if (num == 9999) 
			return 0;
		// 기존의 계좌가 있는지 확인
		for (int i = 0; i < 3; i++) {
			// 계좌를 찾았다!
			if (num == d[i].account_num) {

				printf("계좌를 찾았습니다\n");
				client_index = i; // 찾은 계좌의 인덱스
				break;
			}
		}
		// 계좌를 생성한다
		if (account_index == 3 && client_index==-1) {
			printf("더이상 계좌를 생성할 수 없습니다\n\n");
			continue;
		}
		else if (client_index == -1) {
			printf("계좌를 생성합니다\n");
			printf("생성할 계좌를 입력하세요 >>");
			scanf("%d", &num);
			d[account_index].account_num = num;
			d[account_index].balance = 0;
			printf("이름을 입력하세요 >>");
			scanf("%s",
				d[account_index].name,
				sizeof(d[account_index].name));
			getchar();
			client_index = account_index;
			account_index++;
		}

		while(true) {
			int menu;
			printf("1. 입금\n2. 출금\n3. 잔액조회\n4. 종료\n");
			printf(">>");
			scanf("%d", &menu);
			int money;
			switch (menu) {
			case 1:
				printf("입금>>");
				scanf("%d", &money);
				d[client_index].balance += money;
				break;
			case 2:
				printf("출금>>");
				scanf("%d", &money);
				if (d[client_index].balance >= money)
					d[client_index].balance -= money;
				else
					printf("잔액이 부족합니다\n");
				break;
			case 3:
				printf("잔액 : %d원\n\n", d[client_index].balance);
				break;
			case 4:
				break;
			default:
				break;
			}
			if (menu == 4) {
				printf("종료합니다\n\n");
				break;
			}
		}
	}
}
