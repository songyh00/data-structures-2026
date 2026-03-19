#include <stdio.h>

void copy_variable(int a, int b)
{
    b = a;

    printf("Subprogram에서 복사한 결과: a=%d, b=%d\n", a, b);
}
int main()
{
    int x = 2026, y = 0;

    copy_variable(x, y);
    printf("변수 복사 결과: x=%d, y=%d\n", x, y);
    
    return 0;
}