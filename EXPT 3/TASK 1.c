//Calculator using switch & goto
#include <stdio.h>

int main()
{
    char atom;
    int num1, num2, result;

    printf("\nMenu Driven Calculator\n");
    printf("+ Addition\n");
    printf("- Subtraction\n");
    printf("* Multiplication\n");
    printf("/ Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &atom);

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (atom) 
    {
        case '+':
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    printf("THANK YOU FOR USING CALCULATOR\n");

    return 0;
}
