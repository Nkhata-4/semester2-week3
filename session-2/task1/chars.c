
/*
 *  All char variables are also integers
 *  Some integers are also characters
 */

#include <stdio.h>

int main( void ) {
    char c = 'a';
    int k = 95;
    char b = 'y';
    int s = 4;

    printf("Display char as char: %c\n",c);
    printf("Display char as int: %d\n",c);
    printf("Display int as int: %d\n",k);
    printf("Display int as char: %c\n",k);
    printf("Display char b as char: %c\n", b);
    printf("Display char b as int: %d\n", b);
    printf("Display int s as char: %c\n", s);
    printf("Display int s as int: %d\n", s);

    return 0;
}
