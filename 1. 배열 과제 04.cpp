#include <stdio.h>

int main() {
    // �Ľ�Į�� �ﰢ��
    int p[19][19]; // 2���� �迭

    for (int n = 0; n < 19; n++) {
        for (int k = 0; k <= n; k++) {
            if (k == 0 || k == n) {
                p[n][k] = 1;
            }
            else {
                p[n][k] = p[n - 1][k - 1] + p[n - 1][k];
            }
            printf("%d ", p[n][k]);
        }
        printf("\n");
    }
   
}
