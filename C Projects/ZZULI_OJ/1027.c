/* 春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
 现在要求输入一个三位数，判断该数是否是水仙花数，如果是，输出“yes”，否则输出“no”  */
// 输入一个三位的正整数。
// 输出“yes”或“no”。
#include <stdio.h>
#include <math.h>
int main(void){
    int num, a, b, c;
    scanf("%d", &num);
    c = num % 10;
    b = (num / 10) % 10;
    a = num / 100;
    if (a * a * a + b * b * b + c * c * c == num){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}

// C中判断相等的符号是 == 而不是 = 。后者是赋值符号。