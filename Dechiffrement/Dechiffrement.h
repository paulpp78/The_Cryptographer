

#ifndef CRYPTOGRAPHER_DECHIFFREMENT_H
#define CRYPTOGRAPHER_DECHIFFREMENT_H
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char	*cesar_dechiffre(char *text, unsigned int key);
char    *dechiffre_vigenere(char* text, char* key);
#endif //CRYPTOGRAPHER_DECHIFFREMENT_H