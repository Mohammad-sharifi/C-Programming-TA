/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    // input
    printf("adade morede nazar ra vared konid: ");
    scanf("%d", &num);
    
    // gereftan e dahgan va yekan
    int a1 = num/10;
    int rem = num%10;
    num /= 100;
    
    // switch zadan baraye dahgan
    switch(a1) {
        case 0:
            if (rem == 0) printf("sefr");
            else if (rem == 1) printf("yek");
            else if (rem == 2) printf("do");
            else if (rem == 3) printf("se");
            else if (rem == 4) printf("chahar");
            else if (rem == 5) printf("pang");
            else if (rem == 6) printf("sesh");
            else if (rem == 7) printf("haft");
            else if (rem == 8) printf("hasht");
            else if (rem == 9) printf("noh");
            break;
        case 1:
            if (rem == 0) printf("dah");
            else if (rem == 1) printf("yazdah");
            else if (rem == 2) printf("davazdah");
            else if (rem == 3) printf("sizdah");
            else if (rem == 4) printf("chahardah");
            else if (rem == 5) printf("panzdah");
            else if (rem == 6) printf("shanzdah");
            else if (rem == 7) printf("hefdah");
            else if (rem == 8) printf("hejdah");
            else if (rem == 9) printf("nuzdah");
            break;
        case 2:
            printf("bist");
            break;
        case 3:
            printf("si");
            break;
        case 4:
            printf("chehel");
            break;
        case 5:
            printf("pangah");
            break;
        case 6:
            printf("shast");
            break;
        case 7:
            printf("haftad");
            break;
        case 8:
            printf("hashtad");
            break;
        case 9:
            printf("navad");
            break;
    }
    
    
    if (rem == 1) printf("-va-yek");
    else if (rem == 2) printf("-va-do");
    else if (rem == 3) printf("-va-se");
    else if (rem == 4) printf("-va-chahar");
    else if (rem == 5) printf("-va-pang");
    else if (rem == 6) printf("-va-shesh");
    else if (rem == 7) printf("-va-haft");
    else if (rem == 8) printf("-va-hasht");
    else if (rem == 9) printf("-va-noh");
    
    return 0;
}
