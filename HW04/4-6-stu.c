#include <stdio.h>

int main()
{
    int n;
    
    // input
    printf("tedad e jomalat ra vared konid: ");
    scanf("%d", &n);
    
    // super-fibonacci series
    int f1 = 1, f2 = 1, f3 = 1;
    
    // n = 1 --> 1
    // n = 2 --> 1, 1
    // n = 3 --> 1, 1, 1
    // n = 4 --> 1, 1, 1, 3
    // n = 5 --> 1, 1, 1, 3, 5
    // n = 6 --> 1, 1, 1, 3, 5, 9
    // ...
    
    
    // considering less than 3 input
    if (n == 1) printf("super-fibonacci : 1");
    else if (n == 2) printf("super-fibonacci : 1,1");
    else if (n == 3) printf("super-fibonacci : 1,1,1");
    else printf("super-fibonacci : 1,1,1,");
    
    // // balancing the n variable
    // n -= 3;
    
    int tmp_f3;
    
    for (int k = 3; k < n; k++) {
        // 1, 1, 1, 3, 5
        // hadaf chape jomle ye 6 om ast
        // f3 <-- 5
        // f2 <-- 3
        // f1 <-- 1
        
        // aval zakhire kardane meghdare f3
        // f3 = f3 + f2 + f1
        // pas dadane meghdare f2 be f1
        // pas dadane meghdare f3 be f2

        
        tmp_f3 = f3;
        f3 = f3 + f2 + f1;
        f1 = f2;
        f2 = tmp_f3;
        // single line if
        k+1 != n ? printf("%d,", f3) : printf("%d", f3);
        
    }
    
    return 0;
}
