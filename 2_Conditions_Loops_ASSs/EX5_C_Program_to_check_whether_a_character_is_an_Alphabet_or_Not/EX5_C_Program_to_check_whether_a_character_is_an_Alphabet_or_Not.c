/**********************************************************************************
 Assignment  : EX5_C_Program_to_check_whether_a_character_is_an_Alphabet_or_Not.c
 Author      : ANAS ALSAYAR
 Date        : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>
void main ()
{
	char ch ;
	printf ("Enter an alphabet: ");
	scanf ("%c",&ch);
	switch (ch)
	{
		case 'a'...'z' :
		case 'A'...'Z' :
			printf ("%c is an alphabet\n",ch);
			break;
		default :
			printf ("%c is not an alphabet\n",ch);
	}
}