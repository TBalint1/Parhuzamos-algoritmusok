#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned int a = 5, b = 9;
  
    // The result is 00000010
  
    printf("a>>8 = %d\n", a >> 8);
  
    // The result is 00000100
    printf("b>>8 = %d\n", b >> 8);
    return 0;
}