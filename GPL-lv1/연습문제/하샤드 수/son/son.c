#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int tmp = x;
    while (tmp) {
        sum += tmp % 10;
        tmp /= 10;
    }
    if (x % sum == 0) {
        answer = true;
    }
    else {
        answer = false;
    }
    return answer;
}