#include "skey.h"

/*Generate the ASCII table with decimal, octal, hexadecimal, binary, and the character.*/

char *charToBin(char a) {
    static char b[9];
    int i;
    i = 0;
    while (i<8) {
        b[i] = a&0x80 ? '1' : '0';
        a <<=1;
        i++;
    }
    b[i] = '\0';
    return b;
}
void printASCII() {
    int i;
    puts("Dec\tOct\tHex\tChar\tBin");
    for (i = 0; i < 128; i++){
        printf("%3d\t%3o\t%3x\t  ", i,i,i);
        if (i < 32)
            putchar('-');
        else
            putchar(i);
        putchar('\t');
        puts(charToBin(i));
    }
}
