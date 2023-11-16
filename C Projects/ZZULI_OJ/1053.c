//  http://acm.zzuli.edu.cn/problem.php?id=1053
//  输入x，计算上面公式的前10项和。 
//  输入一个实数x。 
//  输出一个实数，即数列的前10项和，结果保留3位小数。 
#include <stdio.h>
#include <math.h>
long long ret(int a);

int main(void){
    double x;
    long double sum = 0;
    scanf("%lf", &x);
    long double set[10];
    for (int i = 0; i < 10; i++){
        set[i] = pow(-1, i) * pow(x, 2 * i + 1) / ret(2 * i + 1);
    }
    for (int i = 0; i < 10; i++){
        sum += set[i];
    }
    printf("%.3Lf", sum);
    return 0;
}

long long ret(int a){
    long long ret = 1;
    for (int i = 1; i <= a; i++){
        ret *= i;
    }
    return ret;
}