// 20200712.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 20230712.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#define MAX_SIZE 100
int emptycount = 0;
int fullcount = 0;
// 스택 구조체 정의
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// 스택 초기화
void initialize(Stack* stack) {
    stack->top = -1;
}

// 스택이 비어있는지 확인
bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}

// 스택이 가득 찼는지 확인
bool isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("스택이 가득 찼습니다.\n");
        fullcount++;
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
}

// 스택에서 데이터 삭제 및 반환
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어있습니다.\n");
        emptycount++;
        return -1;  // 오류 값
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;

    return poppedItem;
}
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어있습니다.\n");
        return -1;  // 오류 값
    }

    return stack->items[stack->top];
}


int main(void) {
    Stack stack;
    int sum = 0;
    initialize(&stack);
    srand((unsigned int)time(NULL));
    //스택 풀이랑 엠티 카운트 하기
    //100번 반복해서 숫자를 랜덤으로 생성 0이면 push  0~99 1이면 pop
    //여
 /*   int i = 0;*/
    //while (i < 100) {
    //   int number = rand() % 2;
    //   if (number == 0) {
    //       int SN=rand() % 99;
    //       push(&stack, SN);
    //       printf("스택의 맨 위 데이터: %d\n", peek(&stack));
    //       

    //   }
    //   else  {
    //     
    //       printf("스택에서 데이터 삭제: %d\n", pop(&stack));

    //   }



    //    i++;
    //}
    int c;

    do {
        c = _getch();
        push(&stack, c);//문자인지 숫자인지 판단해라
        printf("스택의 맨 위 데이터: %d\n", peek(&stack));
        if (c <= 49 && c >= 58) {
            push(&stack, c);
        }
        if (c >= 42 && c <= 47) {
            pop(&stack);
            pop(&stack);

        }




    } while (c != '.');

    return 0;
}
