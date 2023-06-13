#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// wallpaper_len은 배열 wallpaper의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* wallpaper[], size_t wallpaper_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size=strlen(wallpaper[0]);
    int i_max=0, i_min=-1, j_min=size, j_max=0;
    //i 최소, j최소 / i 최대, j최대 찾으면 되는거 아닌가?    
    for(int i=0; i<wallpaper_len;i++)
    {
        for(int m=0; m<size;m++)
        {
            if(wallpaper[i][m]=='#')
            {
                if(j_min>m) j_min=m;
                if(j_max<m) j_max=m;
                if(i_min==-1) i_min=i;
                if(i_max<i) i_max=i;
            }
        }
    }
        
    int* answer = (int*)malloc(4);
    answer[0]=i_min;
    answer[1]=j_min;
    answer[2]=i_max+1;
    answer[3]=j_max+1;
    return answer;
}