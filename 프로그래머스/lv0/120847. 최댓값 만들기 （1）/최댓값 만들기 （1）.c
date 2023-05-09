#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max1=0, max2=0;
    int maxnumb;
    for(int i=0; i<numbers_len;i++)
    {
        if(max1<numbers[i])
        {
            max1=numbers[i];
            maxnumb=i;
        }
    }
    //2개의 수가 같은 경우
    for(int i=0; i<numbers_len;i++)
    {
        if(i==maxnumb);
        else if(max2<numbers[i]) max2=numbers[i];
    }
    return max1*max2;
}