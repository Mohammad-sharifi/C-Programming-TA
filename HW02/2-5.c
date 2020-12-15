/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    float R1, R2, R3, Vs, I1, V1, P;
    float Req;
    
    // gereftan e maghadire voroodi az karbar
    printf("meghdare R1, R2, R3, Vs ra vared konid:");
    scanf("%f %f %f %f", &R1, &R2, &R3, &Vs);
    
    // hasele movazi shodan e R2, R3
    Req = (R2*R3) / (R2+R3);
    
    I1 = Vs / (R1+Req);
    
    //V1 = (R1*Vs)/(R1+Req);
    
    V1 = R1 * I1;
    
    P = V1 * I1;
    
    // output
    
    printf("V1 = %f , I1 = %f, P = %f", I1, V1, P);
    
    return 0;
}
