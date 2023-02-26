#include "Dechiffrement/Dechiffrement.h"
#include "Chiffrement/Chiffrement.h"

int main(void)
{

    char* message_chiffre = chiffre_cesar("HELLO WORLD", 3);
    printf("Le message est -----> \"%s\"\n", message_chiffre); // "KHOOR ZRUOG"

    char* message_chiffre2 = chiffre_cesar("HELLO WORLD", 30);
    printf("Le message est -----> \"%s\"\n", message_chiffre2); // "LIPPS ASVPH"

    char* message_chiffre3 = chiffre_vigenere("HELLO WORLD", "CRYPTO");
    printf("Le message est -----> \"%s\"\n", message_chiffre3); // "JFOAR ZPNUD"

    char* message_chiffre4 = chiffre_vigenere("HELLO WORLD", "CRYPTOGRAPHY");
    printf("Le message est -----> \"%s\"\n", message_chiffre4); // "JFPPA ZPXAP"

    char* message_dechiffre = cesar_dechiffre("KHOOR ZRUOG", 3);
    printf("Le message est -----> \"%s\"\n", message_dechiffre); // "HELLO WORLD"

    char* message_dechiffre2 = cesar_dechiffre("LIPPS ASVPH", 30);
    printf("Le message est -----> \"%s\"\n", message_dechiffre2); // "HELLO WORLD"

    char* message_dechiffre3 = dechiffre_vigenere("JFOAR ZPNUD", "CRYPTO");
    printf("Le message est -----> \"%s\"\n", message_dechiffre3); // "HELLO WORLD"

    char* message_dechiffre4 = dechiffre_vigenere("JFPPA ZPXAP", "CRYPTOGRAPHY");
    printf("Le message est -----> \"%s\"\n", message_dechiffre4); // "HELLO WORLD"

    return 0;
}
