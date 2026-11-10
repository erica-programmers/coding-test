#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    long long tmp = 1;

    while ((tmp * tmp) < n) {
        tmp++;
    }
    if ((tmp * tmp) == n) {
        tmp++;
        answer = tmp * tmp;
    }
    else    answer = -1;
    return answer;
}