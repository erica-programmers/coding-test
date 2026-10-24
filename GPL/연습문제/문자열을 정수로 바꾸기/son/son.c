#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int len = 0;
    bool minus = false;

    while (s[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (s[i] == '+') {
            continue;
        }

        if (s[i] == '-') {
            minus = true;
            continue;
        }

        int tmp = s[i] - '0';
        for (int j = 0; j < len - i - 1; j++) {
            tmp = tmp * 10;
        }
        answer += tmp;
    }

    if (minus) {
        answer = answer * -1;
    }

    return answer;
}
