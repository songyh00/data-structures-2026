// 전역 배열 사용 + 함수

#include <stdio.h>

#define MAX_ELEMENTS 100

int score[MAX_ELEMENTS];

int find_max_score(int n) {
    int i, tmp;
    tmp = score[0];

    for (i = 1; i < n; i++){
        if (score[i] > tmp)
        tmp = score[i];
    }

    return tmp;
}

int main() {
    int n = 5;

    score[0] = 70;
    score[1] = 85;
    score[2] = 60;
    score[3] = 1000;
    score[4] = 75;

    printf("%d\n", find_max_score(n));

    return 0;
}