#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    if(price<100000) return price;
    if(price>=500000) return price*0.80;
    if(price>=300000) return price*0.90;
    if(price>=100000) return price*0.95;
}