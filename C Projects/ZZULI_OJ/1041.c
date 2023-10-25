//  输入一个整数n，输出数列1-1/3+1/5-……前n项的和。 
//  输入只有一个整数n。 
//  结果保留2为小数,单独占一行。 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int n;
    double sum = 0;
    scanf("%d", &n);
    double set[n];
    for (int i = 0; i < n; i++){
        double j = i;
        int sign = pow((-1), i);
        set[i] = (1 / (2 * j + 1)) * sign;
    }
    for (int i = 0; i < n; i++){
        sum += set[i];
    }
    printf("%.2f", sum);
    return 0;
}

// 本地编译总是提示undefined reference to `pow'，但是扔到OJ上直接过了
// 似乎说是pow()中如果有变量的话需要在编译时指定-lm,不过我指定了也没编译出来