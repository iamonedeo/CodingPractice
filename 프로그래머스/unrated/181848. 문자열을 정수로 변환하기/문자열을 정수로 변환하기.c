#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* n_str) {
    int answer = 0;
    int jari=1;
    
        for (int i = 0; i < strlen(n_str);i++)
    {
        jari *= 10;
    }
    jari /= 10;

    for (int i = 0;i < strlen(n_str);i++)
    {
        answer += (n_str[i] - '0') * jari;
        jari /= 10;
    }

    return answer;
}