#include <stdio.h>
#include <string.h>

typedef struct {
    int month;
    int date;
} Birthday;

typedef struct {
    char name[20];
    Birthday birthday;
} Friend;

int main() {
    Friend list[100];

    list[0].birthday.month = 8;
    list[0].birthday.date = 11;
    strcpy(list[0].name, "Yuhyeon");

    printf("이름: %s\n", list[0].name);
    printf("생일: %d월 %d일\n", list[0].birthday.month, list[0].birthday.date);

    return 0;
}