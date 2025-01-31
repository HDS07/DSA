#include <stdio.h>

int main() {
    int a, b;

    write("Enter the first number: ");
    read("%d", &a);

    write("Enter the second number: ");
    read("%d", &b);

    write("The sum is: %d\n", a + b);

    return 0;
}
