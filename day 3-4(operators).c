#include <stdio.h>

int main() {
    // Q1.arithmetic oper
    int x,y;
    printf("enter the value x,y : ");
    scanf("%d%d",&x,&y);
    printf("Q1 arithmetic operators: ");
    printf("x + y = %d\n",x+y);
    printf("x - y = %d\n",x-y);
    printf("x * y= %d\n",x*y);
    printf("x / y= %d\n",x/y);
    printf("x mod y= %d\n",x%y);
    // Q2 relational operators
    printf("Q2. relational operators\n: ");
    printf("x ==y  = %d\n",x==y);
    printf("x < y = %d\n",x<y);
    printf("x > y  = %d\n",x>y);
    printf("x <= y  = %d\n",x<=y);
    printf("x >= y = %d\n",x>=y);
    printf(" x != y = %d\n ",x!=y);
    // Q3 logical opertors
    printf("Q3. logical opertors\n: ");
    printf(" x&&y = %d\n",x<y&&y==2);
    printf(" x||y = %d\n",x<y||x<y);
    printf(" x!y = %d\n",!(x==y));
    // Q5 assignment opertors
    printf("Q5 assignment opertors. \n: ");
    printf("x +=y  = %d\n",x+=y);
    printf("x -= y = %d\n",x-=y);
    printf("x *= y  = %d\n",x*=y);
    printf("x /= y  = %d\n",x/=y);
    printf("x %= y = %d\n",x%=y);
    // Q6 increment decrement opertors
    printf("Q6 increment decrement opertors \n: ");
    printf("x=%d, y=%d\n",x,y);
    printf("x++ = %d  y++ = %d(post)\n",x++,y++);
    printf("x-- = %d  y-- = %d(post)\n",x--,y--);
    printf("++x = %d  ++y = %d(pre)\n",++x,++y);
    printf("--x = %d  --y = %d(pre)\n",--x,--y);
    // Q7 finding the max useing the codintinaol oper
    int max;
    max= (x>y) ? x : y;
    printf("Q 7 the max(x,y) is : %d\n ",max);
    // Q 8 sizeof operator
    printf("the sizeof operator finding the size of data type \n");
    printf("the size of int is %zu bytes \n", sizeof(int));
    printf("the size of float is %zu bytes \n", sizeof(float));
    printf("the size of double is %zu bytes \n", sizeof(double));
    printf("the size of char is %zu bytes \n", sizeof(char));
    printf("the size of long is %zu bytes \n", sizeof(long));
    printf("the size of long long is %zu bytes \n", sizeof(long long));
    
    return 0;
}
