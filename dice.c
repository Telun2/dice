#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));

    int n=0,m=0;
    int total;
    char name[100];

    n = (rand()%6)+1;
    m = (rand()%6)+1;

    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s\n",name);

    printf("Rolling dice...\n");
    printf("Die 1:%d\n",n);
    printf("Die 2:%d\n",m);
    total = n+m;
    printf("Total value:%d\n",total);

    if ( total >= 8){
        printf("%s won!\n",name);
    }
    else printf("%s lost\n",name);

    return 0;
}
