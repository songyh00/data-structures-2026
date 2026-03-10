// 배열을 매개변수로 전달

#include <stdio.h>

int ArrayMax(int A[], int n) {
    int tmp = A[0];

    for (int i = 1; i < n; i++)
        if (tmp < A[i])
            tmp = A[i];

    return tmp;
}

int main() {
    int A[] = {70, 85, 60, 1000, 75};
    int n = 5;

    printf("%d\n", ArrayMax(A, n));

    return 0;
}