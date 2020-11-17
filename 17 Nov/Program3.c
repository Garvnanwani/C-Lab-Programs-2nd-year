//  Conversion of binary to decimal and others...

#include <stdio.h>
#include <stdlib.h>
void convert_to_x_base(int, int);

int main(void)
{
    int num, choice, base;
    while (1)
    {
        printf("Select conversion: \n\n");
        printf("1. Binary to Decimal \n");
        printf("2. Binary to Hexadecimal \n");
        printf("3. Binary to Octal \n");
        printf("4. Hexadecimal to Binary \n");
        printf("5. Hexadecimal to Decimal \n");
        printf("6. Hexadecimal to Octal \n");
        printf("7. Octal to Binary \n");
        printf("8. Octal to Decimal \n");
        printf("9. Octal to Octal \n");
        printf("10. Exit. \n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            base = 2;
            break;
        case 2:
            base = 8;
            break;
        case 3:
            base = 16;
            break;
        case 10:
            printf("Exiting ...");
            exit(1);
        default:
            printf("Invalid choice.\n\n");
            continue;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Result = ");

        convert_to_x_base(num, base);

        printf("\n\n");
    }

    return 0;
}
