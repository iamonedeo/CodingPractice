#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int ants=0;
    for(int i=0;;i+=5)
    {
        if(hp<i)
        {
            i-=5;
            ants=i/5;
            hp-=(i);
            break;
        }
    }
    for(int i=0;;i+=3)
    {
        if(hp<i)
        {
            i-=3;
            ants+=i/3;
            hp-=(i);
            break;
        }
    }
    ants+=hp;
    
    return ants;
}