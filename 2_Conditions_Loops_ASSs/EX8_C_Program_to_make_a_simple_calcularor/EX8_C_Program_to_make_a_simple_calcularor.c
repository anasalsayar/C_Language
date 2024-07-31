/***************************************************************************
 Assignment  : EX8_C_Program_to_make_a_simple_calculator.c
 Author      : ANAS ALSAYAR
 Date        : Jul 31 - 2024
****************************************************************************/

#include <stdio.h>

void main ()
{
    char ch;
    float a, b;
    int result;

    printf("Enter operator either + or - or * or / : ");
    result = scanf(" %c", &ch);  // Added space before %c to consume any whitespace characters

    if (result != 1 || (ch != '+' && ch != '-' && ch != '*' && ch != '/'))
    {
        printf("Invalid operator.\n");
        return;
    }

    printf("Enter two operands: ");
    result = scanf("%f %f", &a, &b);

    if (result != 2)
    {
        printf("Invalid number entered.\n");
        return;
    }

    switch (ch)
    {
        case '+':
            printf("%f %c %f = %f\n", a, ch, b, a + b);
            break;
        case '-':
            printf("%f %c %f = %f\n", a, ch, b, a - b);
            break;
        case '*':
            printf("%f %c %f = %f\n", a, ch, b, a * b);
            break;
        case '/':
            if (b == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("%f %c %f = %f\n", a, ch, b, a / b);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }
}
