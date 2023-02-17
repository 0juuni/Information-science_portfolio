#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* flag
 * flag가 1이면 player를 의미한다.
 * flag가 2이면 monster(허수아비)를 의미한다.
 * flag가 설정되지 않은 상태라면 모든 값을 1로 통일한다.
 * */
void init(int unit[], int flag) {
    srand((unsigned)time(NULL));
    /*
    nuit[] = {체력, 공격력, 명중률, 방어률}
    */
    int hp;       // 체력
    int atk;      // 공격력
    int hit_rate; // 명중률
    int def_rate; // 방어률
    switch (flag) {
    case 1: // player
        hp = 100 + (rand() % 21);
        atk = 12 + (rand() % 4);
        hit_rate = 50;
        def_rate = 30;
        break;
    case 2: // monster(허수아비)
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

// unit의 상태를 출력한다.
void showInfo(int unit[], char name[]) {
    printf("이름 : %s\n", name);
    printf("체력 : %d\n공격력 : %d\n명중률 : %d\n방어률 : %d\n\n", unit[0],
        unit[1], unit[2], unit[3]);
}
/*
unit이 target을 공격한다.
1. unit의 공격력에 따라 target의 체력이 깎인다.
*/
void attack(int unit[], int target[]) {
    target[0] -= unit[1];
}
int main() {
    int player[4];
    int monster[4];
    init(player, 1);
    init(monster, 2);
    // turn이 true이면 player 차례
    // false이면 monster 차례
    bool turn = true;
    while(true){
        showInfo(player, "플레이어");
        showInfo(monster, "허수아비");
        if (turn) { // player
            attack(player, monster);
            if (monster[0] <= 0) {
                showInfo(player, "플레이어");
                printf("플레이어가 승리하였습니다\n\n");
                break;
            }
        }
        else {      // monster
            attack(monster, player);

            if (player[0] <= 0) {
                showInfo(monster, "허수아비");
                printf("허수아비가 승리하였습니다\n\n");
                break;
            }
        }

        turn = !turn;
    }
    return 0;
}
