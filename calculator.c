#include<stdio.h>

int a, b;
char c;

void add() {
    printf("The addition result is: %i\n", a + b);
}

void sub() {
    printf("The subtraction result is: %i\n", a - b);
}

void mul() {
    printf("The multiplication result is: %i\n", a * b);
}

void div() {
    if (b != 0) {
        printf("The division result is: %i\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void math() {
    if (c == '+') {
        add();
    } else if (c == '-') {
        sub();
    } else if (c == '*') {
        mul();
    } else if (c == '/') {
        div();
    } else {
        printf("Error: Invalid operation.\n");
    }
}

int main() {
    printf("Enter a number: ");
    scanf("%i", &a);
    printf("Enter another number: ");
    scanf("%i", &b);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &c);  // Space before %c to skip any leftover newline

    math();  // Call the math function to perform the operation

    return 0;
}
