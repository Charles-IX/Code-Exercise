// 输入n和n个学生成绩(实数），输出不及格率。
// 输入的第一行是一个整数n，第二行是n个实数，用空格隔开。
// 输出一个实数，表示不及格率，结果保留2位小数，单独占一行。
#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int set[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &set[i]);
    }
    float not_passed = 0;
    for (int i = 0; i < n; i++){
        if (set[i] < 60){
            not_passed++;
        }
    }
    float num = n;
    printf("%.2f", not_passed / n);
    return 0;
}