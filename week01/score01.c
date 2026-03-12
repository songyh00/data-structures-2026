// main 안에서 직접 구현

#include <stdio.h>

int main() {
    int score[] = {70, 85, 60, 1000, 75};
    int n = 5;
    int tmp = score[0];

    for (int i = 1; i < n; i++){
        if (score[i] > tmp)
        tmp = score[i];
    }

    printf("%d\n", tmp);

    return 0;
}