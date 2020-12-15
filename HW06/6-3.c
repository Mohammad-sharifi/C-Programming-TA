/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double mat[2][2];
    double invert_mat[2][2];
    
    // evaluating the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("meghdare mogheiate %d%d ra vared konid: ", i,j);
            scanf("%lf", &mat[i][j]);
        }
    }
    
    // calculating the determinant of matrix
    double mat_determinant = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    if (mat_determinant == 0) {
        printf("meghdare makous daraye anaseri ba meghdare binahayat mibashad!\n");
    } else {
        printf("determinant of matrix is %.3lf\n", mat_determinant);
        
        // invert the matrix
        invert_mat[0][0] = mat[1][1]/mat_determinant;
        invert_mat[0][1] = -mat[0][1]/mat_determinant;
        invert_mat[1][0] = -mat[1][0]/mat_determinant;
        invert_mat[1][1] = mat[0][0]/mat_determinant;
        
        // invert using a for loop
        printf("inverted matrix is \n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("%.3lf ", invert_mat[i][j]);
            }
            printf("\n");
        }
    }
    
    

    return 0;
}
