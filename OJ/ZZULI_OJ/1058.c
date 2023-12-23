//  已知不等式 1! + 2! + 3! + ... +m! < n，请编程对用户指定的n值计算并输出满足该不等式的m的整数解。 
//  输入一个整数n，n为int范围内的正整型。 
//  输出m的取值范围，具体格式见输出样例。 
//  eg.Input: 2000000000
//  eg.Output: m<=12
#include <stdio.h>
#include <math.h>
long long factorial(long long m);
long long sum(long long m);

int main(void){
    long long m, n;
    scanf("%d", &n);
    for (long long i = 1; sum(i) < n; i++){
        m = i;
    }
    printf("m<=%lld", m);
    return 0;
}

long long factorial(long long m){
    long long factorial = 1;
    for (long long i = 1; i <= m; i++){
        factorial *= i;
    }
    return factorial;
}

long long sum(long long m){
    long long sum = 0;
    for (long long i = 1; i <= m; i++){
        sum += factorial(i);
    }
    return sum;
}