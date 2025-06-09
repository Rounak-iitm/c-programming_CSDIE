#include <stdio.h>

int main() {
    int c , a = 34,b= 32;
    float f = 57.8;
    // f = fahrenheit ,c = celisus 
    c = (int)(f - 32 ) * 5 /9;
    printf("th Q 1 \n");
    printf("the celisus is c =  %d and F = %d ",f,c);
    printf(" \nthe Q 2 \n");
    printf("  the division of float number is a / b : %d\n",(float)(a/b));
    printf("the Q 3 implicit vs explicit\n");
    printf("  a + f = %f\n",a+f);
    printf("  a + (int)f = %d",a + (int)f);
    printf("\nthe Q 4 ASCII Value\n");
    char ch = 'A';
    int ascii_v = (int)ch;
    printf("  ascii value of %c is %d",ch,ascii_v);
    printf("\nthe Q 5 float salary to int \n");
    float x = 320000.33;
    int k = (int)x;// x = salary in float 
    printf("  the salary in integer is %d",k);
    
    printf("\nthe Q 6 marks avg as float \n");
    int m1=90,m2=49,m3=93;
    float d = (float)(m1 + m2+ m3)/ 3;// x = salary in float 
    printf("   the avg of 3 marks m1,m2,m3  in flaot is %f",d);
    printf("\n Q 7 double to int_conversion\n");
    double double_value = 123.45678;
    int int_value = (int)double_value;
    printf("  Original: %.5f\n", double_value);
    printf("  After casting to int: %d\n", int_value);
    printf("  Precision loss: Decimal part (.45678) is truncated.\n");
    printf("\nThe Q 8 weight conver...\n ");
    float weight = 15.89;
    int int_weight = (int)weight;
    printf(" Package weight for constraints: %d kg\n", int_weight);
    printf("\nQ 9\n");
    int rupees = 150;
    float paise = 75.50;
    int total_rupees = rupees + (int)(paise / 100);  // Convert paise to rupees
    printf("Total price: %d rupees\n", total_rupees);
    printf("\nthe Q 10 (casting)\n");
    int int_division = a / b;  // Integer division
    float float_division = (float)a / b;  // Float division
    printf("Integer division: %d ÷ %d = %d\n", a, b, int_division);
    printf("Float division: %d ÷ %d = %.4f\n", a, b, float_division);
    return 0;
}
