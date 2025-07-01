#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));

    int n=0,m=0;
    int total;

    n = (rand()%6)+1;
    m = (rand()%6)+1;

    printf("Rolling dice...\n");
    printf("Die 1:%d\n",n);
    printf("Die 2:%d\n",m);
    total = n+m;
    printf("Total value:%d\n",total);

    return 0;
}
