#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
   int ant5,ant3,ant1;
    ant5=hp/5;
    ant3=(hp%5)/3;
    ant1=((hp%5)%3);
    
    
    return ant5+ant3+ant1;
}