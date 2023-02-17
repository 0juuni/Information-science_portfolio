#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* flag
 * flag�� 1�̸� player�� �ǹ��Ѵ�.
 * flag�� 2�̸� monster(����ƺ�)�� �ǹ��Ѵ�.
 * flag�� �������� ���� ���¶�� ��� ���� 1�� �����Ѵ�.
 * */
void init(int unit[], int flag) {
    srand((unsigned)time(NULL));
    /*
    nuit[] = {ü��, ���ݷ�, ���߷�, ����}
    */
    int hp;       // ü��
    int atk;      // ���ݷ�
    int hit_rate; // ���߷�
    int def_rate; // ����
    switch (flag) {
    case 1: // player
        hp = 100 + (rand() % 21);
        atk = 12 + (rand() % 4);
        hit_rate = 50;
        def_rate = 30;
        break;
    case 2: // monster(����ƺ�)
        hp = 90 + (rand() % 21);
        atk = 15;
        hit_rate = 50;
        def_rate = 30;
        break;
    default:
        hp = 1;
        atk = 1;
        hit_rate = 1;
        def_rate = 1;
        break;
    }
    unit[0] = hp;
    unit[1] = atk;
    unit[2] = hit_rate;
    unit[3] = def_rate;
}

// unit�� ���¸� ����Ѵ�.
void showInfo(int unit[], char name[]) {
    printf("�̸� : %s\n", name);
    printf("ü�� : %d\n���ݷ� : %d\n���߷� : %d\n���� : %d\n\n", unit[0],
        unit[1], unit[2], unit[3]);
}
/*
unit�� target�� �����Ѵ�.
1. unit�� ���ݷ¿� ���� target�� ü���� ���δ�.
*/
void attack(int unit[], int target[]) {
    target[0] -= unit[1];
}
int main() {
    int player[4];
    int monster[4];
    init(player, 1);
    init(monster, 2);
    // turn�� true�̸� player ����
    // false�̸� monster ����
    bool turn = true;
    while(true){
        showInfo(player, "�÷��̾�");
        showInfo(monster, "����ƺ�");
        if (turn) { // player
            attack(player, monster);
            if (monster[0] <= 0) {
                showInfo(player, "�÷��̾�");
                printf("�÷��̾ �¸��Ͽ����ϴ�\n\n");
                break;
            }
        }
        else {      // monster
            attack(monster, player);

            if (player[0] <= 0) {
                showInfo(monster, "����ƺ�");
                printf("����ƺ� �¸��Ͽ����ϴ�\n\n");
                break;
            }
        }

        turn = !turn;
    }
    return 0;
}
