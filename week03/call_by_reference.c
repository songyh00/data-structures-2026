#include <stdio.h>

void copy_array(int a[], int b[], int len)
{
    int i;

    for (i = 0; i < len; i++)
        b[i] = a[i];
}

int main()
{
    int A[5] = {10, 20, 30};
    int B[5], i;

    copy_array(A, B, 5);
    printf("배열 복사 결과: \n");
    
    for (i = 0; i < 5; i++)
    {
        printf("A[%d] = %d\t", i, A[i]);
        printf("B[%d] = %d\n", i, B[i]);
    }
}