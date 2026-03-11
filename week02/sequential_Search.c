#include <stdio.h>

int sequentialSearch(int list[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (list[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int list[] = {5, 9, 10, 17, 21, 29, 33, 37, 38, 43};
    int n = 10;
    int key = 43;

    int result = sequentialSearch(list, n, key);

    if (result != -1)
        printf("값: %d\n", result);
    else
        printf("값을 못찾음.\n");

    return 0;
}