#include <stdio.h>

int main()
{
    int n, r;
    long int factn = 1, factr = 1, factnr = 1;
    
    // make sure to get a correct input from user
    do {
        printf("enter n, r: ");
        scanf("%d %d", &n, &r);
    } while(n < r);
    
    // calculating to avoid after effects of while loop
    int nr = n - r;
    
    // calculating n!
    
    while (n != 0) {
        factn *= n;
        n--;
    }
    
    // calculating r!
    
    while (r != 0) {
        factr *= r;
        r--;
    }
    
    // calculating (n-r)!
    
    while (nr != 0) {
        factnr *= nr;
        nr--;
    }

    // output
    printf("result => %f", (double)factn/(double)(factr*factnr));
    
    return 0;
}
