#include "Dechiffrement.h"

char	*cesar_dechiffre(char *text, unsigned int key)
{
    char* output = (char*)malloc(strlen(text) + 1);
    int i = 0;
    while (text[i])
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
            output[i] = ((text[i] - 'A' - key + 26 ) % 26) + 'A';
        else if (text[i] >= 'a' && text[i] <= 'z')
            output[i] = ((text[i] - 'a' - key + 26 ) % 26) + 'a';
        i++;
    }
    output[i] = '\0';
    return output;
}

