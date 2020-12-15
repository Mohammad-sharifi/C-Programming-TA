#include <stdio.h>

int main()
{
    // tamrine 1-3
    
    float x, y, z;
    
    x = 10;
    y = -1.5;
    
    z = (y*y - x*x*x) / (2*x - 1/y);
    
    printf("z=%f", z);
    
    return 0;
}
