#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*double randomInt(){

    int a=rand()%(1000-500)+500;
    return a;
}*/

int main()
{

    srand(time(NULL));
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);
    printf("%d\n", rand()%(1000-500)+500);

    printf("\n");

    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    printf("%0.1lf\n", (rand()%(10000-5000)+5000) / 10.0);
    

    return 0;

}