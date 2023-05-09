#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* n_str) {
    int answer = 0;
    int jari = 1;
    int len;

    for (len = 0; n_str[len];len++) {};

    char* pstr = n_str;
    pstr += len-1;

    for (int i = 0; i < strlen(n_str);i++)
    {
        answer += jari * (*(pstr-i)-'0');
        jari *= 10;
    }
    
    return answer;
}