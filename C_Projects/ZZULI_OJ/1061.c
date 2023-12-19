//  输入一个不大于10的9次方的正整数，从高位开始逐位分割并输出各位数字。
//  输入一个正整数n,n是int型数据。
//  依次输出各位上的数字，每一个数字后面有一个空格，输出占一行。例如，输入 12345 ，输出 1 2 3 4 5  
/* Hint: 注意整数运算避免使用double类型的函数如pow()。
本题可先用一个循环计算出最高位的位权h，然后再用一个循环，循环内容为：
输出最高位(n/h)、扔掉最高位(n = n%h)、降低最高位位权（h =  h/10)，直到位权h为0。 */
#include <stdio.h>
int main(void){
    int n, h;
    scanf("%d", &n);
    for (h = 1; h <= n; h *= 10);
    h /= 10;
    for ( ; h > 0; h /= 10){
        printf("%d ", n / h);
        n %= h;
    }
    return 0;
}