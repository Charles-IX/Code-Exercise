// 一群人坐在一起，每人猜一个 100 以内的数，谁的数字最接近大家平均数的一半就赢。本题就要求你找出其中的赢家。
// 输入格式：输入在第一行给出一个正整数N（≤10^4）。随后 N 行，每行给出一个玩家的名字（由不超过8个英文字母组成的字符串）和其猜的正整数（≤ 100）。
// 输出格式：在一行中顺序输出：大家平均数的一半（只输出整数部分）、赢家的名字，其间以空格分隔。题目保证赢家是唯一的。

#include <stdio.h>
#include <math.h>
int main(void){
    int n, winner;
    int sum = 0, min = 100;
    float target, delta;
    scanf("%d", &n);
    int array[n];
    char name[n][8];
    for (int i = 0; i < n; i++){
        scanf("%s %d", &name[i], &array[i]);
        sum += array[i];
    }
    target = sum / (n * 2);
    for (int i = 0; i < n; i++){
        delta = fabs(array[i] - target);
        if (delta < min){
            min = delta;
            winner = i;
        }
    }
    printf("%.0f %s", target, name[winner]);
    return 0;
}