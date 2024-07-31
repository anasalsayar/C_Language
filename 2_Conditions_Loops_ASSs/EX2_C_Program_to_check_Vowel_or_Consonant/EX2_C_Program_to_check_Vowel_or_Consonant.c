/***************************************************************************
 Assignment  : EX2_C_Program_to_check_Vowel_or_Consonant.c
 Author      : ANAS ALSAYAR
 Date        : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>

void main ()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch ^ (1 << 5); //Convert to lower case ASCII VALUE -32
    }

    if (ch >= 'a' && ch <= 'z')
    {
        switch (ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
        }
    }
    else
    {
        printf("The input is not an alphabet.\n");
    }
}