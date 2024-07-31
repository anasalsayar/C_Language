/********************************************************************************
 Assignment  : EX4_C_Program_to_check_whether_a_number_is_Positive_or_Negative.c
 Author      : ANAS ALSAYAR
 Date        : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>

void main ()
{
    float num;
    int result;
    printf("Enter a number: ");
    result = scanf("%f", &num);

    if (result != 1)
    {
        printf("The input is not a valid number.\n");
        return;
    }

    if (num == 0)
        printf("You entered zero.\n");
    else if (num > 0)
        printf("%f is positive.\n", num);
    else
        printf("%f is negative.\n", num);
}
