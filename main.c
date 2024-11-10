#define KEY 'X';
#define CLEARTEXT 'A';

#include <stdio.h>

void printchar (char c, char *text) 
{
    printf("%s = '%c' (0x%x)\n", text, c, c);
    return;
}

int main () 
{
    char cleartext, key, ciphertext, newcleartext;

    cleartext = CLEARTEXT;
    printchar(cleartext, "cleartext");

    key = KEY;
    printchar(key, "key");

    ciphertext = cleartext ^ key; /* XOR Operation */
    printchar(ciphertext, "ciphertext");

    newcleartext = ciphertext ^ key; /* XOR Operation */
    printchar(newcleartext, "newcleartext");

    return 0;
}