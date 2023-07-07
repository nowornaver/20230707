#include "weaf234.h"
// 20230707.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    char solution[100] = "meet at midnight";
    char answer[100] = "____ __ _______";
    char ch;
    int i;
    while (1) {
        printf("문자열을 입력하세요:%s\n", answer);
        printf("글자를 추측하세요");
        ch = _getch();
        for (i = 0; solution[i] != NULL; i++) {
            if (solution[i] == ch)
                answer[i] = ch;
        }
        if (strcmp(solution, answer) == 0)
            break;

    }






    return 0;
}
