#include <stdio.h>
int main() {
    // 1. Declare and Print Integer Variable
    int num = 10;
    printf("1. Integer value: %d\n\n", num);
    // 2. Add Two Float Numbers
    float f1, f2;
    printf("2. Enter two float numbers: ");
    scanf("%f %f", &f1, &f2);
    printf("Sum = %.2f\n\n", f1 + f2);
    // 3. Find Size of Data Types
    printf("3. Sizes (in bytes): int=%zu, float=%zu, double=%zu, char=%zu\n\n",
           sizeof(int), sizeof(float), sizeof(double), sizeof(char));
    // 4. Swap Using Temporary Variable
    int a = 5, b = 10, temp;
    printf("4. Before swap with temp: a=%d, b=%d\n", a, b);
    temp = a; a = b; b = temp;
    printf("   After swap: a=%d, b=%d\n\n", a, b);
    // 5. Swap Without Temporary Variable
    a = 5; b = 10;
    printf("5. Before swap without temp: a=%d, b=%d\n", a, b);
    a = a + b; b = a - b; a = a - b;
    printf("   After swap: a=%d, b=%d\n\n", a, b);
    // 6. Display ASCII Value of a Character
    char ch;
    printf("6. Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value of %c = %d\n\n", ch, ch);
    // 7. Calculate Simple Interest
    float P, R, T, SI;
    printf("7. Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n\n", SI);
    // 8. Multiply Two Integers
    int x, y;
    printf("8. Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Product = %d\n\n", x * y);
    // 9. Find Average of Three Numbers
    float n1, n2, n3;
    printf("9. Enter three float numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Average = %.2f\n", (n1 + n2 + n3) / 3);

    return 0;
}
