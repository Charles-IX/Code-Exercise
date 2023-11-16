//  输入两个正整数m和n，输出m到n之间每个整数的自然对数。 
//  输入包括两个整数m和n(m<=n)，之间用一个空格隔开。
//  每行输出一个整数及其对数，整数占4列，对数占8列，右对齐，对数保留4位小数。 
#include <stdio.h>
#include <math.h>
int main(void){
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i <= n - m; i++){
        printf("%4d%8.4f\n", m + i, log(m + i));
    }
    return 0;
}