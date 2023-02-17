#include <stdio.h>

int main() {
    // 파스칼의 삼각형
    int p[19][19]; // 2차원 배열

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
