#include <stdio.h>

#define MAX_DEGREE 100

typedef struct {
    int degree;
    float coef[MAX_DEGREE];
} Polynomial;

// 입력
Polynomial read_poly() {
    int i;
    Polynomial p;

    printf("다항식의 최고 차수를 입력하시오: ");
    scanf("%d", &p.degree);

    printf("각 항의 계수를 입력하시오 (총 %d개): ", p.degree + 1);
    for (i = 0; i <= p.degree; i++) {
        scanf("%f", &p.coef[i]);
    }

    return p;
}

// 덧셈 (a + b)
Polynomial add_poly(Polynomial a, Polynomial b) {
    int i;
    Polynomial p;

    if (a.degree > b.degree) {
        p = a;
        for (i = 0; i <= b.degree; i++)
            p.coef[i + (p.degree - b.degree)] += b.coef[i];
    } else {
        p = b;
        for (i = 0; i <= a.degree; i++)
            p.coef[i + (p.degree - a.degree)] += a.coef[i];
    }

    return p;
}

// 뺄셈 (a - b)
Polynomial sub_poly(Polynomial a, Polynomial b) {
    int i;
    Polynomial p;

    if (a.degree > b.degree) {
        p = a;
        for (i = 0; i <= b.degree; i++)
            p.coef[i + (p.degree - b.degree)] -= b.coef[i];
    } else {
        p = b;
        for (i = 0; i <= a.degree; i++)
            p.coef[i + (p.degree - a.degree)] = a.coef[i] - p.coef[i + (p.degree - a.degree)];
    }

    return p;
}

// 곱셈 (a * b)
Polynomial mul_poly(Polynomial a, Polynomial b) {
    Polynomial p;
    int i, j;

    p.degree = a.degree + b.degree;

    // 초기화
    for (i = 0; i <= p.degree; i++)
        p.coef[i] = 0;

    // 곱셈
    for (i = 0; i <= a.degree; i++) {
        for (j = 0; j <= b.degree; j++) {
            p.coef[i + j] += a.coef[i] * b.coef[j];
        }
    }

    return p;
}

// 출력
void print_poly(Polynomial p, char str[]) {
    int i;

    printf("%s", str);

    for (i = 0; i <= p.degree; i++) {
        if (i == p.degree)
            printf("%4.1f x^%d", p.coef[i], p.degree - i);
        else if (p.degree - i == 0)
            printf(" + %4.1f", p.coef[i]);
        else
            printf(" + %4.1f x^%d", p.coef[i], p.degree - i);
    }

    printf("\n");
}

int main() {
    Polynomial a, b, c_add, c_sub, c_mul;

    a = read_poly();
    b = read_poly();

    c_add = add_poly(a, b);
    c_sub = sub_poly(a, b);
    c_mul = mul_poly(a, b);

    print_poly(a, " A = ");
    print_poly(b, " B = ");
    print_poly(c_add, "A+B= ");
    print_poly(c_sub, "A-B= ");
    print_poly(c_mul, "A*B= ");

    return 0;
}