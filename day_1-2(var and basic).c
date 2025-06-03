#include <stdio.h>

int main() {
    // 1. Declare and Print Integer Variable
    int num = 10;
    printf("The value of num is: %d\n", num);

    // 2. Add Two Float Numbers
    float f1 = 5.5, f2 = 3.2, sum;
    sum = f1 + f2;
    printf("Sum of %.2f and %.2f is %.2f\n", f1, f2, sum);

    // 3. Find Size of Data Types
    printf("int=%zu, float=%zu, double=%zu, char=%zu\n\n",
           sizeof(int), sizeof(float), sizeof(double), sizeof(char));

    // 4. Swap Two Variables Using a Temporary Variable
    int a = 5, b = 10, temp;
    printf("Before swap (using temp): a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);

    // 5. Swap Two Variables Without Using a Temporary Variable
    int x = 5, y = 10;
    printf("Before swap (without temp): x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap: x = %d, y = %d\n", x, y);

    // 6. Display ASCII Value of a Character
    char ch = 'A';
    printf("The ASCII value of %c is %d\n", ch, ch);

    // 7. CIP
    float P = 2000, R = 8, T = 2, SI;
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n", SI);

    // 8. Multiply Two Integers
    int m = 6, n = 7, product;
    product = m * n;
    printf("Product of %d and %d is %d\n", m, n, product);

    // 9. Find the Average of Three Numbers
    float n1 = 2.5, n2 = 4.0, n3 = 6.9, avg;
    avg = (n1 + n2 + n3) / 3;
    printf("Average = %.2f\n", avg);
    return 0;
}
