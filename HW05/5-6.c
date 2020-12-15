/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

// function to solve a quadratic equation
double Solve(double a, double b, double c) {
    double delta = b*b - 4*a*c; // calculating delta
    
    if (delta < 0) return -1;
    
    double root1 = (-b + sqrt(delta)) / (2*a);
    double root2 = (-b - sqrt(delta)) / (2*a);
    
    printf("r1 = %lf \t r2 = %lf \t", root1, root2);
    
    if (root1 > root2) return root1;
    else return root2;
}


int main()
{
    double a, b, c;
    
    // input
    printf("zarayebe moadele ra vared konid: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // printing co-efficients to console
    printf("%lf %lf %lf\n", a, b, c);
    
    // output
    double ans = Solve(a, b, c);
    if (ans != -1) {
        printf("bozorgtarin rishe = %lf", ans);
    } else {
        printf("moadele daraye rishe mohomi mibashad!");
    }
    
    return 0;
}
