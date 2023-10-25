//  输入一个整数n，输出数列1+1/3+1/5+……前n项的和。 
//  输入只有一个正整数n。 
//  结果保留2位小数，单独占一行。
#include <stdio.h>
int main(void){
    int n;
    double sum = 0;
    scanf("%d", &n);
    double set[n];
    for (int i = 0; i < n; i++){
        double j = i;
        set[i] = 1 / (2 * j + 1);
    }
    for (int i = 0; i < n; i++){
        sum = set[i] + sum;
    }
    printf("%.2f", sum);
    return 0;
}
