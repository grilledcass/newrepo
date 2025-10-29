#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tally[10] = {0};
    int temp;
    for(int x=0; x < 10; x++){
        int temp = (rand() % 10 );
        tally[temp]++;
    }
    for(int y = 0; y < 10; y++)
    printf("%d ", tally[y]);
}