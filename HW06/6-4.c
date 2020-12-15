/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// main source to validate your matrix code
// ncalculators.com/matrix/3x3-matrix-multiplication-calculator.htm


#include <stdio.h>

int main()
{
    int n1, m1, n2, m2;
    
    // input
    do {
        
        printf(" abade matrix e aval ra vared konid: ");
        scanf("%d %d", &n1, &m1);
        
        printf(" abade matrix e dovom ra vared konid: ");
        scanf("%d %d", &n2, &m2);
        
    } while (n1 > 10 || m1 > 10 || n2 > 10 || m2 > 10 || m1 != n2);
    
    
    int mat1[n1][m1];
    int mat2[n2][m2];
    int mat[n1][m2]; // size --> n1xm1 * n2xm2 = n1xm2
    
    
    // evaluating the multiply matrix for sums with zeros
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            mat[i][j] = 0;
        }
    }
    
    
    // first matrix
    printf("first matrix evaluating\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            printf("meghdare mogheiate %d%d ra vared konid: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // second matrix
    printf("second matrix evaluating\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            printf("meghdare mogheiate %d%d ra vared konid: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    
    // multiply two matrix stage
    for (int row = 0; row < n1; row++) { // number of output matrix rows
        for (int col = 0; col < m2; col++) { // number of output matrix columns
            for (int z = 0; z < m1; z++) { // number of first matrix columns or second matrix rows
                mat[row][col] += mat1[row][z]*mat2[z][col];
                // row 1, col1
                // first loop mat[0][0] = mat1[0][0]*mat2[0][0]
                // second loop mat[0][0] = mat1[0][1]*mat2[1][0]
                // third loop mat[0][0] = mat1[0][2]*mat2[2][0]
                
            }
        }
}
    
    // output
    printf("\n");
    for (int h = 0; h < n1; h++) {
        for (int k = 0; k < m2; k++) {
            printf("%d ", mat[h][k]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
