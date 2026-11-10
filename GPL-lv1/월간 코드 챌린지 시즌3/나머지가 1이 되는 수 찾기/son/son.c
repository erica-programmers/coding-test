#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int x = 1;
    while (1) {
        if (n % x == 1){
            answer = x;
            break;
        }
        x++;
    }
    return answer;
}