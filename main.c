#define KEY '1';
#define CLEARTEXT 'A';

#include <stdio.h>

void printchar (char c, char *text) 
{
    printf("%s = '%c' (0x%x)\n", text, c, c);
    return;
}

char encrypt (char cleartext, char key)
{
    char ciphertext;
    ciphertext = cleartext ^ key;
    return ciphertext;
}

char decrypt (char ciphertext, char key)
{
    char newcleartext;
    newcleartext = ciphertext ^ key;
    return newcleartext;
}

int main () 
{
    char cleartext, key, ciphertext, newcleartext;

    cleartext = CLEARTEXT;
    printchar(cleartext, "cleartext");

    key = KEY;
    printchar(key, "key");

    ciphertext = encrypt(cleartext, key);
    printchar(ciphertext, "ciphertext");

    newcleartext = decrypt(ciphertext, key); /* XOR Operation */
    printchar(newcleartext, "newcleartext");

    return 0;
}