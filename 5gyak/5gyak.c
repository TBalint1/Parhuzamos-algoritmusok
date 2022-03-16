#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int randomNum[10]={};
    time_t t1;

    srand((unsigned)time(&t1));

    for(int i = 0; i < 10; i++) {

        printf( "%d \n", rand() % 100);

    }

    
    return 0;
}