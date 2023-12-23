// 输入3个整数，输出绝对值最大的那个数。 
// 输入包含3个int范围内的整数，用空格隔开。
// 输出三个数中绝对值最大的数，单独占一行。若绝对值最大的数不唯一，则输出最先出现的那个。例如，若输入为1 -3 3，则输出为-3；若输入为1 3 -3则输出为3。 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int maxABS(int a, int b);

int main(void){
    int set[3];
    int max = 0;
    scanf("%d %d %d", &set[0], &set[1], &set[2]);
    for (int i = 0; i < 3; i++){
        max = maxABS(max, set[i]);
    }
    printf("%d", max);
    return 0;
}

int maxABS(int a, int b){
    if (abs(a) >= abs(b)){
        return a;
    }
    else{
        return b;
    }
}

// 从算法效率的角度上讲，将max值初始化为set[0]更好，因为有更大概率直接「猜中」答案。不过此处数组长度很短，优化意义不大，所以我写成了更易于自己理解的形式。