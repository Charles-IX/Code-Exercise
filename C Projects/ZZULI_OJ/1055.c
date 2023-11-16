//  这是一个有趣的古典数学问题，著名意大利数学家Fibonacci曾提出一个问题：
//  有一对小兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。按此规律，假设没有兔子死亡，第一个月有一对刚出生的小兔子，问第n个月有多少对兔子？ 
//  输入月数n（1<=n<=44）。 
//  输出第n个月有多少对兔子。 
#include <stdio.h>
int rabbit(int x, int y);
int n;
int set[44];

int main(void){
    int sum = 0;
    set[0] = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        rabbit(i, set[i]);
    }
    for (int i = 0; i < n; i++){
        sum += set[i];
    }
    printf("%d", sum);
    return 0;
}

int rabbit(int x, int y){
    for (int i = x + 2; i < n; i++){
        set[i] += y;
    }
}