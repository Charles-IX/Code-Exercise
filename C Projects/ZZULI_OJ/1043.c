// 输入一个整数n和n个整数，输出这n个整数的最大值。
// 输入有两行：第一行是一个正整数n，第二行是n个整数。
// 输出包含一个整数，即n个数中的最大值，单独占一行。
#include <stdio.h>
int max(int x, int y);

int main(void){
    int n, set[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &set[i]);
    }
    for (int i = 0; i < n; i++){
        printf("%d ", &set[i]);
    }
    printf("%d\n", set[n]);
    for (int i = 0; i + 1 < n; i++){
        max(set[i], set[i+1]);
    }
    printf("%d", set[n]);
    return 0;

}

int max(int x, int y){
    int temp;
    if (x > y){
        temp = x;
        x = y;
        y = temp;
    }
}