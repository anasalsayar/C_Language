/***************************************************************************
 Assignment  : EX3_C_Program_to_find_the_largest_num_among_three_numbers.c
 Author      : ANAS ALSAYAR
 Date        : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>

void main ()
{
    float num1, num2, num3;
    int result;
    printf("Enter three numbers: ");
    result = scanf("%f %f %f", &num1, &num2, &num3);

    if (result != 3)
    {
        printf("Invalid input. Please enter three numbers.\n");
        return;
    }

    if ((num1 > num2) && (num1 > num3))
        printf("Largest number = %f\n", num1);
    else if ((num2 > num1) && (num2 > num3))
        printf("Largest number = %f\n", num2);
    else if ((num3 > num1) && (num3 > num2))
        printf("Largest number = %f\n", num3);
    else
        printf("The three numbers are equal.\n");
}
