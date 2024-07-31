/**********************************************************************************
 Assignment  : EX6_C_Program_to_calculate_the_sum_of_first_n_integers.c
 Author      : ANAS ALSAYAR
 Date        : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>

void main ()
{
    int i;
    int result;
    printf("Enter an integer: ");
    result = scanf("%i", &i);

    if (result != 1)
    {
        printf("The input is not a valid integer.\n");
        return;
    }

    printf("Sum = %i\n", (i * (i + 1) / 2));
}