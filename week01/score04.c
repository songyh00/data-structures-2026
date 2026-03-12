// 전역 배열 사용 + 함수 + scanf

#include <stdio.h>

#define MAX_ELEMENTS 100

int score[MAX_ELEMENTS];

int find_max_score(int n) {
    int i, tmp;
    tmp = score[0];

    for (i = 1; i < n; i++) {
        if (score[i] > tmp)
            tmp = score[i];
    }

    return tmp;
}

int main() {
    int i;

    printf("5개의 값 입력:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }

    printf("최대값: %d\n", find_max_score(5));

    return 0;
}