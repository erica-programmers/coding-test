#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int len = 0;
    int tmp = n;
    while (tmp) {
        len++;
        tmp /= 10;
    }
    int* answer = (int*)malloc(len * sizeof(int));

    int digit;
    int ptr = 0;
    while (n) {
        digit = n % 10;
        answer[ptr] = digit;
        n /= 10;
        ptr++;
    }

    return answer;
}