/***************************************************************************
 Assignment  : EX1_C_Program_to_check_whether_a_Number_is_Even_or_Odd.c
 Author      : ANAS ALSAYAR
 Date  		 : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>
void main ()
{
	int num ;
	printf ("Enter an integer you want to check: ");
	scanf ("%i",&num);
	if ((num%2)==0)
	{
		printf ("%i is even.\n",num);
	}
	else if ((num%2)!=0)
	{
		printf ("%i is odd.\n",num);

	}
}