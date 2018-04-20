/*
 * Simply explained using the putchar() 
 * variable d is used to keepp track of if the character is backslash, tabs, backspace
 * If it is one of them then make d = 1
 * else make d = 0 indicating normal character, need to just print.
 */

#include <stdio.h>

int main()
{
    int c, d;

    while ( (c=getchar()) != EOF) {
        d = 0;
        if (c == '\\') {      // testing for a backslah (\\)
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t') {     // testing for a tab (\t)
            putchar('\\');
            putchar('t');
            d = 1;
        }
        if (c == '\b') {     // testing for a backspace(\b)
            putchar('\\');
            putchar('b');
            d = 1;
        }
        if (d == 0)         
            putchar(c);        
    }
    return 0;
}
