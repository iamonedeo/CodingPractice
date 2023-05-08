#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int num;
    int even=0,odd=0;
    int evenjari=1,oddjari=1;
    
    for(int i=num_list_len-1;0<=i;i--)
    {
        num=num_list[i];
        if(num%2==0){
            even+=num_list[i]*evenjari;
            evenjari*=10;
        } 
        else
        {
            odd+=num_list[i]*oddjari;
            oddjari*=10;
        }            
    }
    
    return even+odd;
}