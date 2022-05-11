#include "main_header.h"

void percent(int num, int *Lockstack) { //시도한 횟수, 잠금된 횟수
    CLS;
    int percent = 0;
    srand(time(NULL));
    percent = rand() % 100;
    printf("현재 잠금 스택 %d\n", *Lockstack);
    switch (num) {
    case 1:
        if (percent <= 100)
        {
            printf("첫번째 시도. . . 확률은 100%% 입니다\n");
            Sleep(1000);
            CLS;
            printf("다시 시도 성공!\n");
            Sleep(1000);
        }
        break;
    case 2:
        if (percent <= 80)
        {
            printf("두번째 시도. . . 확률은 80%% 입니다\n");
            for (int i = 1; i < 4; i++) {
                if (i == 1) { printf("두구 두구\n"); }
                if (i == 2) { printf("과연\n"); }
                if (i == 3) { printf("결과는?!?\n"); }
                Sleep(1000);
            }
            CLS;
            printf("다시 시도 성공!\n");
            Sleep(1000);
        }
        else
        {
            printf("두번째 시도. . . 확률은 80%% 입니다\n");
            for (int i = 1; i < 4; i++) {
                if (i == 1) { printf("두구 두구\n"); }
                if (i == 2) { printf("과연\n"); }
                if (i == 3) { printf("결과는?!?\n"); }
                Sleep(1000);
            }
            CLS;
            printf("다시 시도 실패!\n");
            if (*Lockstack == 0) {
                *Lockstack += LockUI(FIRST); //LockUI(0,10);
            }
            else if (*Lockstack == 1) {
                *Lockstack += LockUI(SECOND);
            }
            else if (*Lockstack == 2) {
                *Lockstack += LockUI(THIRD);
            }
            else if (*Lockstack >= 3) {
                *Lockstack += LockUI(MORE);
            }
            Sleep(1000);
        }
        break;
    case 3:
        if (percent <= 60)
        {
            printf("세번째 시도. . . 확률은 60%% 입니다\n");
            for (int i = 1; i < 4; i++) {
                if (i == 1) { printf("두구 두구\n"); }
                if (i == 2) { printf("과연\n"); }
                if (i == 3) { printf("결과는?!?\n"); }
                Sleep(1000);
            }
            CLS;
            printf("다시 시도 성공!\n");
            Sleep(1000);
        }
        else
        {
            printf("세번째 시도. . . 확률은 60%% 입니다\n");
            for (int i = 1; i < 4; i++) {
                if (i == 1) { printf("두구 두구\n"); }
                if (i == 2) { printf("과연\n"); }
                if (i == 3) { printf("결과는?!?\n"); }
                Sleep(1000);
            }
            CLS;
            printf("다시 시도 실패!\n");
            if (*Lockstack == 0) {
                *Lockstack += LockUI(FIRST);
            }
            else if (*Lockstack == 1) {
                *Lockstack += LockUI(SECOND);
            }
            else if (*Lockstack == 2) {
                *Lockstack += LockUI(THIRD);
            }
            else if (*Lockstack >= 3) {
                *Lockstack += LockUI(MORE);
            }
            Sleep(1000);
        }
        break;
    default:
        if (percent <= 40)
        {
            printf("%d번째 시도. . . 이후 확률은 40%% 입니다\n", num);
            for (int i = 1; i < 4; i++) {
                if (i == 1) { printf("두구 두구\n"); }
                if (i == 2) { printf("과연\n"); }
                if (i == 3) { printf("결과는?!?\n"); }
                Sleep(1000);
            }
            CLS;
            printf("다시 시도 성공!\n");
            Sleep(1000);
        }
        else
        {
            printf("%d번째 시도. . . 이후 확률은 40%% 입니다\n", num);
            for (int i = 1; i < 4; i++) {
                if (i == 1) { printf("두구 두구\n"); }
                if (i == 2) { printf("과연\n"); }
                if (i == 3) { printf("결과는?!?\n"); }
                Sleep(1000);
            }
            CLS;
            printf("다시 시도 실패!\n");
            if (*Lockstack == 0) {
                *Lockstack += LockUI(FIRST);
            }
            else if (*Lockstack == 1) {
                *Lockstack += LockUI(SECOND);
            }
            else if (*Lockstack == 2) {
                *Lockstack += LockUI(THIRD);
            }
            else if (*Lockstack >= 3) {
                *Lockstack += LockUI(MORE);
            }
            Sleep(1000);
        }
        break;
    }
}
