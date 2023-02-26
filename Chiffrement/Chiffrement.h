
#ifndef CRYPTOGRAPHER_CHIFFREMENT_H
#define CRYPTOGRAPHER_CHIFFREMENT_H
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
char	*chiffre_cesar(char *text, unsigned int key);
char    *chiffre_vigenere(char *text, char *key);
#endif //CRYPTOGRAPHER_CHIFFREMENT_H
