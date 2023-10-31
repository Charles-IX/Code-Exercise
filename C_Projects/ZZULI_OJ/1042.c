//  求1-2/3+3/5-4/7+5/9-6/11+...的前n项和，结果保留3位小数。 
//  输入正整数n(n>0)。 
//  输出一个实数，保留3位小数，单独占一行。 
#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    scanf("%d", &n);
    double set[n], j, sum;
    for (int i = 0; i < n; i++){
        j = i;
        int sign = pow((-1), i);
        set[i] = (j + 1) / (2 * j + 1) * sign;
    }
    sum = 0;
    for (int i = 0; i < n; i++){
        sum += set[i];
    }
    printf("%.3f", sum);
    return 0;
}