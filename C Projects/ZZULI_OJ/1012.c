// 求实数的绝对值。
#include <stdio.h>
#include <math.h>
int main(void){
    float a, b;
    scanf("%f", &a);
    b = fabs(a);
    printf("%.2f", b);
    return 0;
}

// 家人们谁懂啊，abs()只能用来求整型绝对值，fabs()才能用来求浮点型绝对值