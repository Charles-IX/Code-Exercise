// 给定一个不多于5位的正整数，判断它是几位数，并输出。
// Input: 一个不多于5位的正整数。 
// Output: 输出正整数的位数，单独占一行。
// Hint: 使用函数log10(n)，求出n的以10为底的对数，这个对数的整数部分，就是n的科学计数法中的指数，这个整数加1就是n的位数。
#include <stdio.h>
#include <math.h>
int main(void){
    int num, digit;
    scanf("%d", &num);
    digit = log10(num) + 1;
    printf("%d", digit);
    return 0;
}