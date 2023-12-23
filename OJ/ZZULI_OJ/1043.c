// 输入一个整数n和n个整数，输出这n个整数的最大值。
// 输入有两行：第一行是一个正整数n，第二行是n个整数。
// 输出包含一个整数，即n个数中的最大值，单独占一行。
#include <stdio.h>

int main(void){
    int n, temp;
    scanf("%d", &n);
    int set[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &set[i]);
    }
    for (int i = 0; i + 1 < n; i++){
        if (set[i] > set[i + 1]){
            temp = set[i];
            set[i] = set[i + 1];
            set[i + 1] = temp;
        }
    }
    printf("%d", set[n - 1]);
    return 0;
}

// 一个单独的函数只能返回一个值，所以要实现上面这种“两数交换”还是得在主调函数进行。