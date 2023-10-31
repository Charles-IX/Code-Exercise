// 输入一个整数n和n个整数，输出这n个整数的和。 
// 输入有两行：第一行是一个正整数n，第二行是n个整数。 
// 输出一个整数，即n个数的和。输出单独占一行。 
#include <stdio.h>
int main(void){
    int n;
    int sum = 0;
    scanf("%d", &n);
    int set[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &set[i]);
    }
    for (int j = 0; j < n; j++){
        sum = sum + set[j];
    }
    printf("%d", sum);
    return 0;
}

// 如果数组的长度需要从scanf()输入，那么数组的初始化必须要在输入后进行。