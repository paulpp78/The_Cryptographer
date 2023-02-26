#include "Dechiffrement.h"

char    *dechiffre_vigenere(char* text, char* key)
{
    int text_length = strlen(text);
    int key_length = strlen(key);
    char* result = (char*) malloc((text_length + 1) * sizeof(char));
    int i, k;
    for (i = 0; i < text_length; i++)
    {
        if (isalpha(text[i]))
        {
            k = tolower(key[i % key_length]) - 'a';
            if (isupper(text[i]))
                result[i] = ((text[i] - 'A' - k + 26) % 26) + 'A';
            else
                result[i] = ((text[i] - 'a' - k + 26) % 26) + 'a';
        }
        else
            result[i] = text[i];
    }
    result[text_length] = '\0';
    return result;
}
