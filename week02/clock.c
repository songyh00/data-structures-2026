#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;
    int sum = 0;
    clock_t start, finish;
    double duration;

    start = clock();

    for(i = 1; i < 11; i++){
        sum += i;
        printf("%d\n", sum);
    }

      /*for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }*/

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;

    printf("실행시간: %f 초입니다.\n", duration);

    return 0;
}