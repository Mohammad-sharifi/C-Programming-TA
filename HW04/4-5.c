#include <stdio.h>

int main()
{
    char ch;
    int counter = 1;
    
    printf("enter a character : ");
    scanf("%c", &ch);
    
    // first approach

    if (ch >= 'a' && ch <= 'z') {
        
        char ch1 = 'a';
        while (ch != ch1 && ch1 <= 'z') {
            counter++;
            ch1++;
        }
        
        printf("the letter %c is lowercase and its rank is %d ", ch, counter) ? counter <= 26 : printf("entered character is not in range of alphabetic letters");   
        
    } else if (ch >= 'A' && ch <= 'Z') {
        
        char ch1 = 'A';
        while (ch != ch1 && ch1 <= 'Z') {
            counter++;
            ch1++;
        }
        
        printf("the letter %c is uppercase and its rank is %d ", ch, counter) ? counter <= 26 : printf("entered character is not in range of alphabetic letters");   
        
    }

    // second approach
    if (ch >= 'a' && ch <= 'z') {
        
        printf("the letter %c is lowercase and its rank is %d ", ch, ch - 'a' + 1);   
        
    } else if (ch >= 'A' && ch <= 'Z') {
        
        printf("the letter %c is uppercase and its rank is %d ", ch, ch - 'A' + 1);   
        
    }
    
    return 0;
}
